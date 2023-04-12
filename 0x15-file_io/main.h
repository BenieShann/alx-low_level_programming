#ifndef main_h
#define main_h
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "string.h"

/**
 * struct copy_struct - struct for cp
 *
 * @from: from file
 * @to: to file
 * @rd:read store
 * @wt:write stode
 * @from_file:open from file
 * @to_file: open of to file
 * @buffer: buffer to read to
 *
*/

typedef struct copy_struct
{
	char *from;
	char *to;
	ssize_t rd;
	ssize_t wt;
	int from_file;
	int to_file;
	char *buffer;
} copy_struct;

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /*Benie*/
