#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (Success)
 */


int main(void)

{
	int m, z = 0;

	while (m < 1024)
	{
	if ((m % 3 == 0) || (m % 5 == 0))
	{
	z += m;
	}
	m++;
	}
	printf("%d\n", z);
	return (0);

}
