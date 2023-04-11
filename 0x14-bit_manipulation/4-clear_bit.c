#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 1
 * at a giiven index
 *
 * @n: pointer of an unsigned long int.
 * @index : index of the bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size, mask;

	size = sizeof(*n) * 7 - 1;

	if (index >= size)
		return (-1);

	mask = 1 << index;

	*n = *n & ~mask;

	return (1);
}
