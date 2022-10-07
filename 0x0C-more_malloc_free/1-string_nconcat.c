#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *k;
	unsigned int j, m, h, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j] != '\0'; j++)
		;

	for (m = 0; s2[ls2] != '\0'; m++)
		;

	if (n > m)
		n = m;

	h = j + n;

	k = malloc(h + 1);

	if (k == NULL)
		return (NULL);

	for (i = 0; i < h; i++)
		if (i < j)
			k[i] = s1[i];

		else
			k[i] = s2[i - j];

	k[i] = '\0';

	return (k);
}
