#include "main.h"

/**
 * _isupper - checks of a character is upercase or not
 * @c: character to be tested
 * Return: 1 if it is upercase 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
