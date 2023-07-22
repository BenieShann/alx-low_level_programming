#include "main.h"

/**
 *print_alphabet_x10 - prints lower case alphabet
 *Return void
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{

		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			++x;
		}
		++i;
		_putchar('\n');
	}	
}
