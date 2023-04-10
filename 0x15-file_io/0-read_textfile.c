#include "main.h"

/**
 * read_textfile - reads text files and prints it to POSIX stdout.
 *
 * @filename: name of file to read.
 * @letters: number of letters it should read or print.
 *
 * Return:actual number of letters possible to be read or print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	int fp, output, read_file;

	str = malloc(sizeof(char) * letters);
	if (!str)
	{
		free(str);
		return (0);
	}

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}

	read_file = read(fp, str, letters);
	output = write(STDOUT_FILENO, str, read_file);
	close(fp);
	return (output);
}
