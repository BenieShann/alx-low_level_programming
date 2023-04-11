#include <stdio.h>

/**
* get_endianness - returns the end of the processor
*
* Return:1 for little and 0 for big
*
*/

int get_endianness(void)
{
	unsigned int m;

	return ((int) (((char *)&m)[0]));
}
