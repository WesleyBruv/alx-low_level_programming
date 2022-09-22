#include "main.h"

/**
 * reverse_array - the function will reverse the contents of the array
 * @a: is the array
 * @n: is the number of elements
 */

void reverse_array(int *a, int n)
{
	int rev, array;

	for (array = n - 1; array > n / 2; array--)
	{
		rev = a[n - 1 - array];
		a[n - 1 - array] = a[array];
		a[array] = rev;
	}
}
