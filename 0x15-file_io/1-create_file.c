#include "main.h"

/**
 * create _file - creates a file with ead or write access for user
 *
 * @filename: name of file to create
 * @text_content: content of file to create
 *
 * Return: 1 on success, -1 if it failed
 */

int create_file(const char *filename, char *text_content)
{
	int file, length, size;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file < 0)
		return (-1);

	for (length = 0; text_content && text_content[length];)
		length++;

	size = write(file, text_content, length);

	if (size < 0)
		return (-1);
	close(file);

	return (1);
}
