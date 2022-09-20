#include <stdio.h>
#include "main.h"

/**
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
	while (x >= 0)
	{
		putchar(s[x]);
		x--;
	}
	putchar('\n');
}
