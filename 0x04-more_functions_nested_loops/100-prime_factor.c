#include <stdio.h>

/**
 * main - prints largest prime factor.
 *
 * Return: Always 0.
 */

int main(void)
{
	long n = 612852475143;
	int m;

	while (m++ < n / 2)
	{
		if (n % m == 0)
		{
			n /= 2;
			continue;
		}
	
	for (m = 3; m < n / 2; m += 2)
	{
		if (n % m == 0)
		{
			n /= m;
		}
	}
	}
	printf("%ld\n", n);

	return (0);
}
