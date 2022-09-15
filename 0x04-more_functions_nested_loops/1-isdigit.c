#include "main.h"

/**
 * _isdigit - checks if a character is a digit or if it is not
 * @c: is the tested character
 * Return: 1 if it is a digit, 0 if it is not a digit
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
