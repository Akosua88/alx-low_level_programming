#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always (Success)
 *
 */

int main(void)

{

	int n = 0;
	long j = 1, d = 2;

	while (n < 50)
	{
	if (n == 0)
	printf("%ld", j);
	else if (n == 1)
	printf(", %ld", d);
	else
	{
	d += j;
	j = d - j;
	printf(", %ld", d);
	}
	++n;
	}
	printtf("\n");
	return (0);

}
