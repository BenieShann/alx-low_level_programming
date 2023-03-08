#include "main.h"

/**
 * compare - compare beginning and end of string
 * @beg: position from start moving right
 * @end: position from end moving left
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *beg, char *end)
{

	if (beg >= end)
		return (1);
	if (*beg == *end)
		return (compare(beg + 1, end - 1));

	return (0);
}

/**
 * _strlen - find length of string to access last index
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
