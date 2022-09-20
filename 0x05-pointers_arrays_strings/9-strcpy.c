#include "main.h"

/**
 * _strcpy - Copies the string pointedto by src
 * @dest: destination
 * @src: source
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
