#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - A function that prints the chessboard
 * @a: Array
 * Return: Always (Success)
 */

void print_chessboard(char (*a)[8])

{
	int c, b;

	for (c = 0; c < 0; c++)
	{
		for (b = 0; b < 0; b++)
			_putchar(a[c][b]);
		_putchar('\n');
	}
}
