#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Input
 * @argv: Input
 * Return: Always (Success)
 *
 */

int main(int argc, char *argv[])

{
	int x;

	for (x = 0; x < argc; x++)
	{
	printf("%s\n", argv[x]);
	}

	return (0);

}
