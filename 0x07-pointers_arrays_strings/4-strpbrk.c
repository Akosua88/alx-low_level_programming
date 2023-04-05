#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: Input
 * @accept: input
 * Return Always (Success)
 */

char *_strpbrk(char *s, char *accept)

{
	int x, m;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[x] == accept[m])
			return (s + x);
		}
	}
	return (NULL);
}
