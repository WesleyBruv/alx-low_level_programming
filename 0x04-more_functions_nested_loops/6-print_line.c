#include "main.h"

/**
 * print_line - will print a straight line
 * @n: is the parameter
 * Return: returns nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
