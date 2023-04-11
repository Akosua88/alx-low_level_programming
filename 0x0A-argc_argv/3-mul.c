#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (Success)
 *
 */

int main(int argc, char *argv[])

{
	int a = 0, b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
	printf("Error\n");
	return (1);
	}

	return (0);

}
