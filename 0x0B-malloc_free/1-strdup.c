#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *dstr;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + i))
	{
		j++;
		i++;
	}
	j++;

	dstr = malloc(sizeof(char) * j);

	if (dstr == NULL)
		return (NULL);

	i = 0;
	while (i < j)
	{
		*(dstr + i) = *(str + i);
		i++;
	}

	return (dstr);
}
