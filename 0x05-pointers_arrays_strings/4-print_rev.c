#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse string
 *
 * @s: input
 *
 * Return: void
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		x++;
	}
	for (x = x - 1; s[x] != '\0'; x--)
	{
		putchar(s[x]);
	}
	putchar('\n');
}
