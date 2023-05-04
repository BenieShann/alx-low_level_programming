#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1
 * at a given index
 *
 * @n: pointer of an unsigned long int
 * @index: index of bit.
 *
 * Return: 1 if it worked or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > 63)
		return (-1);

	s = 1 << index;
	*n = (*n | s);

	return (1);
}
