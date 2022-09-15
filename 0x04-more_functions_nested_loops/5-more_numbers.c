#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers up to 14
 *
 * Return: returns nothing
 */

void more_numbers(void)
{
	int x1, x2;

	for (x1 = 0; x1 < 10; x1++)
	{
		for (x2 = 0; x2 <= 14; x2++)
		{

			if (x2 > 9)
			{
				putchar((x2 / 10) + '0');
			}
			putchar((x2 % 10) + '0');
		}
		putchar(10);
	}
}


