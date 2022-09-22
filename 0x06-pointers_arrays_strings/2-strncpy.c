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
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; n > x; x++)
		dest[x] = '\0';

	return (dest);
}
