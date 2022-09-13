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
	int i = 0;
	char x = 'a';

	while (i <= 10)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		i++;
		_putchar('\n');
		x = "a";
	}
}

