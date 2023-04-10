#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: Input
 * @b: Input
 * @n: Number of times
 * Return: Always (Success)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);

}

