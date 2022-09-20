#include "main.h"

/**
 * rev_string - will reverse the string
 *
 * @s: pointer to the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int x, y, z, rev;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	y = x - 1;
	z = 0;

	while (z < y)
	{
		rev = s[z];
		s[z] = s[y];
		s[y] = s[rev];
		z++;
		y++;
	}
}	       
