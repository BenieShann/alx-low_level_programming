#include "main.h"

/**
 * _strpbrk - return pointer to byte in s matching a byte in accept
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, a;

	while (s[i] != '\0')
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return ('\0');

}
