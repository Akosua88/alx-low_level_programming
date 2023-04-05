#include <stdio.h>
#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: Input
 * @c: Input
 * Return: Always (Success)
 */

char *_strchr(char *s, char c)

{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (s + m);
	}

	return (NULL);

}
