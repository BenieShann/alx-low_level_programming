#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of the 2 diagonals of a square matrix of integers
 * @a: the matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{

	int d1 = 0;
	int d2 = 0;
	int r, i;

	for (r = 0; r < size; r++)
	{
		i = (r * size) + r;
		d1 += a[i];
	}

	for (r = 1; r <= size; r++)
	{
		i = (r * size) - r;
		d2 += a[i];
	}

	printf("%d, %d\n", d1, d2);

}
