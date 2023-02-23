#include <stdio.h>
#include "main.h"

/**
 * main - Entry
 *
 * Description: prints the numbers 1 - 100
 * Fizz for multiples of 3, Buzz for multiple of 5,
 * and FizzBuzz for multiple of both
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
