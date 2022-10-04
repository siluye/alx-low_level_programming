#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: pointer of an array
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j = 0, leng = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		leng++;

	j = malloc(sizeof(char) * leng);

	if (j == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[j++] = s2[i];

	return (concat_str);
}
