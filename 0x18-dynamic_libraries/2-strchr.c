#include "main.h"

/**
 * _strchr - return pointer to 1st location of char
 * @s: search string
 * @c: character to search
 * Return: Pointer to c or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return ('\0');
}
