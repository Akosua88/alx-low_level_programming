#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints all the numbers of base
 *
 * Return: Always (Success)
 */

int main(void)

{
	int c;
	char i;

	for (c = '0'; c <= '9'; c++)
	putchar(c);

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');

	return (0);

}
