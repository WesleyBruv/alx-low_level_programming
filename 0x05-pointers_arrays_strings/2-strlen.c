#include "main.h"
#include <stdio.h>

/**
 * _strlen - will be the length of a string
 *
 * @s: input value
 *
 * Return: void
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}

	return (x);
}
