#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array of integers
 * @min: Input
 * @max: Input
 *
 * Return: min > max, return NULL
 */

int *array_range(int min, int max)

{
	int *p, a = 0;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[a] = min;
		a++;
		min++;
	}

	return (p);
}
