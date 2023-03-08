#include "main.h"

/**
 * _pow_recursion - calculate power of x^y
 * @x: Number
 * @y: Exponent
 * Return: power of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
