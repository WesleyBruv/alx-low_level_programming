#include "main.h"

/**
 * _strncat - will concatenate both strings but also 
 * add the inputed number of bytes
 *
 * @dest: string to be appended
 * @src: string to be completed after dest
 * @n: int parameter to compare x to
 *
 * Return: returns to new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x++])
		y++;

	for (x = 0; src[x] && x < n; x++)
		dest[y++] = src[x];
	
	return (dest);
}

