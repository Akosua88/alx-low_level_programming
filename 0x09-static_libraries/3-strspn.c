#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: Input
 * @accept: Input
 * Return: Always (Success)
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int x, n;

	n = 0;

	while (*s)
	{
		for (x = 0; s[x] != '\0'; x++)
		{

		for (n = 0; accept[n] != '\0'; n++)
		{
		if (accept[n] == s[x])
			{
				n++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (n);
		}
		}
		s++;
	}
	return (n);
}
