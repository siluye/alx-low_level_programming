#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpab;

	for (alpab = 'a'; alpab <= 'z'; alpab++)
		putchar(alpab);

	putchar('\n');

	return (0);
}
