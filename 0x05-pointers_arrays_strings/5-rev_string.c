#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 *
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*(s + leng) != '\0')
		leng++;

	return (leng);
}


/**
 * rev_string - reverses a string
 * @s: holi
 *
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int i, leng;
	char a, z;

	leng = _strlen(s) - 1;
	i = 0;

	while (i < leng)
	{
		a = s[i];
		z = s[leng];
		s[i++] = z;
		s[leng--] = a;
	}
}
