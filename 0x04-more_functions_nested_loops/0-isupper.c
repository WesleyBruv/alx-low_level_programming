#include "main.h"

/**
 * _isupper - will check if a character is in uppercase or not
 *@c: is the character that will be tested
 *Return: 1 if its uppercase, 0 if not
 */

int _isupper(int c)
{
	if ((c >= "A") || (c <= "Z"))
	{
		return (1);
	}

	return (0);
}

