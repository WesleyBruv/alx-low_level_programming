#include "main.h"

/**
 * print_triangle - printing triangles
 * @size: Is the size of the triangles
 */
void print_triangle(int size);
{
	int x, y, z;

	for (z = 0; z < size; z++)
	{
		x = size - i - 1;
		y = 1 + i;
		while (x > 0)
		{
			_putchar (' ');
			x--;
		}
		while (y > 0)
		{
			-putchar('#');
			y--;
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
