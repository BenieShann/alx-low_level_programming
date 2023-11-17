#include "lists.h"

/**
 * printfirst - function executed before main function
 */

void printfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

void __attribute__ ((constructor)) printfirst();
