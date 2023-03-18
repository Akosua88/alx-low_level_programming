#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always (Success)
 */

int main(void)

{
	int c, p, q;

	for (c = '0'; c <= '9'; c++)
	{

	for (p = c + 1; p <= '9'; p++)
	{

	for (q = p + 1; q <= '9'; q++)
	{
	if ((p != c) != q)
	{
	putchar(c);
	putchar(p);
	putchar(q);
	if (c == '7' && p == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
