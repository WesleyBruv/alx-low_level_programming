#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 *
 * @s : This will be the input string
 *
 * Return: void.
 */

void puts2(char *str)
{
	int x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			putchar(str[x]);
		}
		x++;
	}
	putchar('\n');
}
