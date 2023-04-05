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
	unsigned int x, n, value, check;

	value = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[x])
			{
				value++;
				check = 1;
			}
		}
	}
}
