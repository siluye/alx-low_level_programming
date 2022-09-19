#include "main.h"

/**
 * rev_string - reverses a string
 * @s: holi
 *
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int i j k leng;

	while (s[i] != 0)
	{
		i++;
	}

	leng = i;
	i = 0;
	j = leng - 1;

	while (i < j)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
		i++;
		j--;
	}
}
