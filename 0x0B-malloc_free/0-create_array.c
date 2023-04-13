#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an arrays of char
 * @c: Input
 * @size: Input
 * Return: Always (Success)
 */

char *create_array(unsigned int size, char c)

{
	unsigned int x;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		str[x] = c;
	}

	return (str);

}
