#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: if the number of arguments is not exactly one -1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])

{
	int cedis, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cedis = atoi(argv[1]);

	while (cedis > 0)
	{
		coins++;
		if ((cedis - 25) >= 0)
		{
			cedis -= 25;
			continue;
		}
		if ((cedis - 10) >= 0)
		{
			cedis -= 10;
			continue;
		}
		if ((cedis - 3) >= 0)
		{
			cedis -= 3;
			continue;
		}
		if ((cedis - 2) >= 0)
		{
			cedis -= 2;
			continue;
		}
		cedis--;
	}

	printf("%d\n", coins);

	return (0);
}
