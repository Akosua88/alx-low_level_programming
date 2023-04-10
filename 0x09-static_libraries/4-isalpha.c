#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetical charaters or 0 for anything els
 */

int _isalpha(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);

}
