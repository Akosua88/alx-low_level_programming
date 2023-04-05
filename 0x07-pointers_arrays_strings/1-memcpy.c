#include <stdio.h>
#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: Input
 * @src: Input
 * @n: Number of inputs
 * Return: Always (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);

}
