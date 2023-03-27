#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @a: Firts interger to swap
 * @b: Second integer to swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* The function that swap the two integers .*/

{
	int temp = *a;
	*a = *b;
	*b = temp;

}
