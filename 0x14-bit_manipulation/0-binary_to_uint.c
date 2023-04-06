#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to a string with a binary number
 *
 * return: 0 to indicate an error or unsigned int of binary number
 *
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
