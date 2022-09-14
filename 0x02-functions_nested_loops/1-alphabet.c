#include "main.h"

/**
 * It prints the alphabet in lowercase fallowed by a new line
 *
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	_putchar(alpha);

	_putchar('\n');
}
