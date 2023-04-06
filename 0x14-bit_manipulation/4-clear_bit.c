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
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int mask = ~(1UL << index);

	*n &= mask;
	return (1);
}

