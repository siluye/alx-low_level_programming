#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int count = 0, i;
	int small_lett[] = {97, 101, 111, 116, 108};
	int cap_lett[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == small_lett[i] || *(s + count) == cap_lett[i])
			{
				*(s + count) = num[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
