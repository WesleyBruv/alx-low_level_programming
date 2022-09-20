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
	int x = 0;

	while (s[x])
	{
		x++;
	}
	while (--x >= 0)
	{
		putchar(s[x]);
	}
	putchar('\n');
}
