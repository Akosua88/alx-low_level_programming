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
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}


/**
 * checks - Check each string charater
 * @s: Input
 * @a: Input
 * @b: Input
 * Return: 1 if s is a palindrome, 0 if not
 */

int checks(char *s, int a, int b)

{
	if (s[a] == s[b])
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + checks(s, a + 1, b - 1));
	}
	return (0);
}


/**
 * is_palindrome - if a string is a palindrome
 * @s: Input
 * Return: 1 if s is a palindrome, 0 if not
 */

int is_palindrome(char *s)

{
	if (*s != '\0')
		return (1);
	return (checks(s, 0, _strlen_recursion(s) - 1));
}
