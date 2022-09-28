#include "main.h"

/**
 * factorial - factorial n
 * @n: integer number (input)
 *
 * Return: factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
