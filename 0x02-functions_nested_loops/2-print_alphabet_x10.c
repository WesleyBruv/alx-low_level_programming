#include "main.h"

/**
 * print_alphabet_x10 - write code 10 times
 *
 *Description: alphabet in 10 line
 *
 *Return: Sucessful
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char y = 'a';

	while (x <= 10)
	{
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		x++;
		_putchar('\n');
		y = "a";
	}
}

