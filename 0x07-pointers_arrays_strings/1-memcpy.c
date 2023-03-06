#include "main.h"

/**
 * _memcpy - copy n bytes frm src to dest memory
 * @dest: destination memory
 * @src: source memory
 * @n: bytes to copy
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int bts = n;

	if (bts > 0)
	{
		int i;

		for (i = 0; i < bts; i++)
			dest[i] = src[i];
	}

	return (dest);
}
