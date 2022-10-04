#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *strdoub;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	strdoub = (char *)malloc(sizeof(char) * (i + 1));

	if (strdoub == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strdoub[j] = str[j];

	return (strdoub);

}
