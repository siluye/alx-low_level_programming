#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of int
 * @a: an input of array
 * @n: n elements of input
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
