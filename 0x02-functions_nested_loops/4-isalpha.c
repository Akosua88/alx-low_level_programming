#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetical charaters or 0 for anything els
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);

}
