#include <stdio.h>

/**
 * swap_int - 2 integers
 *
 * @a: will be the first input
 *
 * @b: will be the second input
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
