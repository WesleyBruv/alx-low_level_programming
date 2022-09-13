#include <stdio.h>
#include <main.h>

/**
 * main - lowercase alphabet
 *
 * Description: print (a-z) the lower case alphabet
 *
 * Return: Sucessful
 */

void print_alphabet(void);
{
	char i = 'a';
	
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
