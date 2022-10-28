#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int y, z;

	if (!b)
		return (0);

	x = 0;

	for (y = 0; b[y] != '\0'; y++)
		;

	for (y--, z = 1; y >= 0; y--, z *= 2)
	{
		if (b[y] != '0' && b[y] != '1')
		{
			return (0);
		}

		if (b[y] & 1)
		{
			x += z;
		}
	}

	return (x);
}
