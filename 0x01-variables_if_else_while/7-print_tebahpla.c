#include <stdio.h>

/**
 * main - Entry point
 *
 * Regular: Always 0 (Success)
 */
int main(void)
{
	char alphab;

	for (alphab = 'z'; alphab >= 'a'; alphab--)
		putchar(alphab);

	putchar('\n');

	return (0);
}
