#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned int s;

	s = binary_to_uint("1");
	printf("%u\n", s);
	s = binary_to_uint("101");
	printf("%u\n", s);
	s = binary_to_uint("1e01");
	printf("%u\n", s);
	s = binary_to_uint("1100010");
	printf("%u\n", s);
	s = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", s);
	return (0);
}
