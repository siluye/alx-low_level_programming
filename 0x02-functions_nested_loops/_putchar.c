#include "main.h"
#include <unistd.h>

/**
 * main - Entry Point - _putchar writes character c to stdout
 *
 * Return: On Success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

