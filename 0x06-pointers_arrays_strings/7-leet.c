#include "main.h"

/**
 * leet - will encode the string into the
 * following code 1337
 *
 * @d; string that will be encoded  
 *
 * Return: address of s
 */

char *leet(char *d)
{
	int x, y;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; *(d + x); x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (a[y] == *(d + x))
				*(d + x) = b[y];
		}
	}
	return (d);
}
