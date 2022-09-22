#include "main.h"

/**
 * _strncpy - the function will function like the one
 * in the example
 *
 * @src: string source
 * @dest: storing for the string
 * @n: maximum bytes copied
 *
 * Return: will return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x])
	{
		x++;
	}

	while (y < n && src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x + n + 1] = '\0';

	return (dest);

}
