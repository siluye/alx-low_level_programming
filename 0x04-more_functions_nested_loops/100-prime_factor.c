#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, m;

	n = 612852475143;
	for (m = 2; m <= n; m++)
	{
		if (n % fp == 0)
		{
			n /= m;
			m--;
		}
	}
	printf("%ld\n", m);

	return (0);
}
