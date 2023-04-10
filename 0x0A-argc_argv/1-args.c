#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * argc: Input
 * argv: Input
 * Return: Always (Success)
 *
 */

int main (int argc, char *argv[])

{
	(void) argv;

	printf("%x\n", argc - 1);

	return (0);

}
