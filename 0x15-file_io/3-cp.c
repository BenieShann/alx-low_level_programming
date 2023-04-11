#include "main.h"

/**
* error_read - function checks for error for reading a file.
*
* @s: pointer to character string
*
*/

void error_read(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}

/**
* cp_error - error handler for copy function.
*
* @content: to be copied from the file
* @buffer: temporarly store data
*
*/

void cp_error(char *content, char *buffer)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", content);
	exit(99);
}


/**
* main - entry point.
* @argc: no. of arguments
* @argv: arguments vector
* @error_file: error of the file
* Return: 0 always
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t schars, swr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	schars = 1024;
	while (schars == 1024)
	{
		schars = read(file_from, buf, 1024);
		if (schars == -1)
			error_file(-1, 0, argv);
		swr = write(file_to, buf, schars);
		if (swr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}
