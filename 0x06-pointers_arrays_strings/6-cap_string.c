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

	while (d[x])
	{
		while (!(d[x] >= 'a' && d[x] <= 'z'))
			x++;

		if (d[x - 1] == ' ' ||
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
			d[x] -= 32;
		x++;
	}
	return (d);
}
