#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - lowercase alphabet
 *
 *Description: print the lower case alphabet
 *
 *Return: Sucessful
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
