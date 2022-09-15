#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - will all print numbers exept 2 and 4
 *
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int x;

	for (x = 45; x < 55; x++)
	{
		if ((x == 51) || (x == 53))
		{
			continue;
		}
		putchar(x);
	}
	putchar(10);
}
