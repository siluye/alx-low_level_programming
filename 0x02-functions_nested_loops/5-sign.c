#include "main.h"

/**
 * print_sign - Determines if the input number is
 * greater, less than or equalto zero and prints sign
 *
 * @n: Input number as an integer.
 *
 * Return: 1 if greater than 0, 0 if equal to 0
 * -1 if it is less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
