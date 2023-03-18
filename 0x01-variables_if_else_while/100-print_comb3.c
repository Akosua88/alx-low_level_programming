#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always (Success)
 */

int main(void)

{

	int c, p;

	for (c = '0'; c <= '9'; c++)
	{

	for (p = c + 1; p <= '9'; p++)
	{
	if (p != c)
	{
	putchar(c);
	putchar(p);
	if (c == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
