#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - A function that check the length
 * @s: Input
 * Return: Length
 */

int _strlen_recursion(char *s)

{
	if (*s !=  '\0')
	{
	return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
