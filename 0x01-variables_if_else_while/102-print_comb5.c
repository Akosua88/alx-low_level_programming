#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible combinations of two two digit numbers
 *
 * Return: Always (Success)
 */

int main(void)

{
	int c, q;

	for (c = 0; c <= 98; c++)
	{

	for (q = c + 1; q <= 99; q++)
	{
	putchar((c / 10) + '0');
	putchar((c % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q & 10) + '0');
	if (c == 98 && q == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);

}
