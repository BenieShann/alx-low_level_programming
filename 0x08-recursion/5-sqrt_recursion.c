#include "main.h"

/**
 * _sqrt_recursion - calculates the squareroot of a number
 * @n: number to find root of
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	return (root(n, 1));
}

/**
 * root - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: squareroot or -1
 */
int root(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (root(n, i + 1));
}
