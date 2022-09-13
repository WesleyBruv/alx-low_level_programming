#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar
 *
 * Description: return _putchar
 *
 * Return sucessful
 */
int main(void)
{
	int x = 0;
	char y[8] = "_putchar";

	while (x < 8)
	{
		_putchar(y[x]);
		x++;
	}
	_putchar('\n');
	
	return (0);
}
