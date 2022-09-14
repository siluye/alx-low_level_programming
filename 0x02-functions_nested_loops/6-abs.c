#include "main.h"

/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @n: number being tested
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
