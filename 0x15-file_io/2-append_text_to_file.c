#include "main.h"

/**
 * append_text_to_file - function append contents to the end of the file
 * @filename: name of file to create
 * @text_content: content to.
 * Return: 1 if the function sucessfully appends the text to the file,
 * -1 if error.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int rwr;
	int sletters;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (sletters = 0; text_content[sletters]; sletters++)
			;

		rwr = write(fd, text_content, sletters);

		if (rwr == -1)
			return (-1);/*success*/
	}

	close(fd);

	return (1);
}
