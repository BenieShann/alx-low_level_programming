#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string with a binary number
 *
 * Return: the converted number or 0 if b is null or
 * there is one or more chars in the string b that is not in 0
 */

unsigned int binary_to_uint(const char *b)
{
	int s;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);

	for (s = 0; b[s] != '\0'; s++)
	{
		if (b[s] != '0' && b[s] != '1')
		return (0);
	}

	for (s = 0; b[s] != '\0'; s++)
	{
		num <<= 1;
		if (b[s] == '1')
			num += 1;
	}
	return (num);
}
