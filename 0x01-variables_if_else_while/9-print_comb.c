#include <stdio.h>

/**
 * main - A program that prints all possible combinations of single-digit
 * numbers in ascending order
 * separated by commas using putchar
 *
 *  Return: 0
 */

int main(void)
{
	int num = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}


