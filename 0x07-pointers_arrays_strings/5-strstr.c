#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 *
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *lusi;
	char *lusiye;

	while (*haystack != '\0')
	{
		lusi = haystack;
		lusiye = needle;

		while (*haystack != '\0' && *lusiye != '\0' && *haystack == *lusiye)
		{
			haystack++;
			lusiye++;
		}
		if (!*lusiye)
			return (lusi);
		haystack = lusi + 1;
	}
	return (0);
}
