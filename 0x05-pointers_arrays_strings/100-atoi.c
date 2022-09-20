#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: Integer
 */

int _atoi(char *s)
{
	unsigned int count = 0, x = 0, y = 0, z = 1, i = 1, j;

	while (*(s + count) != '\0')
	{
		if (x > 0 && (*(s + count) < '0' || *(s + count) > '9'))
		{
			break;
		}

		if (*(s + count) == '-')
		{
			z *= -1;
		}

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (x > 0)
				i *= 10;
			x++;
		}
		count++;
	}

	for (j = count - x; j < count; j++)
	{
		y = y + ((*(s + j) - 48) * i);
		i /= 10;
	}

	return (y * z);
}

