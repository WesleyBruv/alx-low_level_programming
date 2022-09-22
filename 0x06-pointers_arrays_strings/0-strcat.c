#include "main.h"

/**
 * _strcat - will concatenates the sting pointed by @src
 * to end of string pointed by @dest
 *
 * @dest: string that shall be appended
 * @src: string that will be concatenated
 *
 * Return: will return to pointer @dest
 */

char *_strcat(char *dest, char *src)
{
	int src_ = 0, dest_ = 0;

	while (dest[src_++])
		dest_++;

	for (src_ = 0; src[src_]; src_++)
		dest[dest_++] = src[src_];

	return (dest);
}
