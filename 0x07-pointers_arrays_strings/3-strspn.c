#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 *
 * Return: returns pointer to c position
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, j;
	char *k = accept;

	while (*s)
	{
		j = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				j = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = k;
		if (j == 0)
			break;
	}

	return (count);
}
