#include "main.h"

/**
 * string_toupper - will change all the lower case
 * letters of a string  to uppercase
 *
 * @str: parameter
 * Return: will return a character
 */

char *string_toupper(char *str)
{
	int array = 0;

	while (str[array++])
	{
		if (str[array] >= 'a' && str[array] <= 'z')
			str[array] -= 32;
	}

	return (str);
}
