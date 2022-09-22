#include "main.h"

/**
 * _strcmp - function that will be compare two strings
 *
 * @s1: String one
 * @s2: string two
 * Return: Return 0 if s1 == s2
 * Return negative if s1 < s2
 * Return positive if s1 > s2
 *
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, change = 0;

	while (1)
	{
		if (s1[x] == '\0' && s2[x] == '\0')
			break;
		else if (s1[x] == '\0')
		{
			change = s2[x];
			break;
		}
		else if (s2[x] == '\0')
		{
			change = s1[x];
			break;
		}
		else if (s1[x] != s2[x])
		{
			change = s1[x] - s2[x];
			break;
		}
		else
			x++;
	}

	return (change);
}
