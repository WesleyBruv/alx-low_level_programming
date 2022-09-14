#include "main.h"

/**
 *print_alphabet_x10 - write code 10 times
 *
 *Description: alphabet in 10 line
 *
 *Return: Sucessfull
 */

void print_alphabet_10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n')
	}
}

