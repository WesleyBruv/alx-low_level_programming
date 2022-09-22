#include "main.h"

/**
 * cap_string - will caps all the words in
 * the string
 *
 *@d: string to caps
 *
 * Return: adress of s
 */

char *cap_string(char *d)
{
	int x = 0, y;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(d + 1))
	{
		if (*(d + 1) >= 'a' && *(d + x) <= 'z')
		{
			if (x == 0)
				*(d + x) -= 'a' - 'A';
			else
			{
				for (y = 0; y <= 12; y++)
				{
					if (a[y] == *(d + x - 1))
						*(d + x) -= 'a' - 'A';
				}
			}
		}
		x++;
	}
	return (d);
}
