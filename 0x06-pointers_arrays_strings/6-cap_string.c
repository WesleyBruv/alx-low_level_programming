#include "main.h"

/**
 * cap_string - will caps all the words in
 * the string
 *
 *@d: string to caps
 *
 * Return: adress of d
 */

char *cap_string(char *d)
{
	int x = 0;
	int lad = 1;

	while (d[x])
	{
		if (lad == 1)
		{
			if (d[x] > 96 && d[x] < 123)
			{
				d[x] = d[x] - 32;
			}
			lad = 0
		}

			if (d[x] == ' ' ||
			d[x - 1] == '\t' ||
			d[x - 1] == '\n' ||
			d[x - 1] == ',' ||
			d[x - 1] == ':' ||
			d[x - 1] == '.' ||
			d[x - 1] == '!' ||
			d[x - 1] == '?' ||
			d[x - 1] == '"' ||
			d[x - 1] == '(' ||
			d[x - 1] == ')' ||
			d[x - 1] == '{' ||
			d[x - 1] == '}')
				lad = 1;
		x++;
	}
	return (d);
}
