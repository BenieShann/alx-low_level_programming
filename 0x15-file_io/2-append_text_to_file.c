#include "main.h"


/**
* append_text_to_file - function append contents to the end of the file
*
* @filename: name of file to create
* @text_content: content to
*
* Return: 1 if the function sucessfully appends the text to the file,
* -1 if error.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	FILE *file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}

	int result = fprintf(file, "%s", text_content);

	fclose(file);

	if (result < 0)
	{
		return (-1);
	}

	return (1);
}
