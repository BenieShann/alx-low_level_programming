#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * Return void
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		++x;
	}

	_putchar('\n');
}
