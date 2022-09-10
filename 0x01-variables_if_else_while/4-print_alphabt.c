#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		if (alphab != 'e' && alphab != 'q')
			putchar(alphab);
	}

	putchar('\n');

	return (0);
}
