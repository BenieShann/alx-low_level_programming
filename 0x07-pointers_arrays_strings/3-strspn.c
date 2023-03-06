#include "main.h"

/**
 * _strspn - return length of string that matches values
 * @s: string to search
 * @accept: target matches
 * Return: Bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{

	int i = 0, a;
	int m = 0;

	while (s[i] != '\0')
	{

		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				m++;
				break;
			}
			if (accept[a + 1] == '\0' && s[i] != accept[a])
				return (m);
		}
		i++;
	}
	return (m);
}
