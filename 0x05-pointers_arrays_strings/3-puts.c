#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 *
 * @str: string input
 *
 * Return: void
 */

void _puts(char *str)
{
	int x = 0;
	char y;

	while (str[x])
	{
		y = str[x];
		putchar(y);
		x++;
	}
	putchar('\n');
}
