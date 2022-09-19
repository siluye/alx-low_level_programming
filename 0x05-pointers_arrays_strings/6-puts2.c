#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * 
 * Return: Nothing
 */

void puts2(char *str)
{
	int leng = 0, i = 0;

	while (str[leng] != '\0')
		leng++;

	leng -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
