#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*(s + leng) != '\0')
		leng++;

	return (leng);
}
