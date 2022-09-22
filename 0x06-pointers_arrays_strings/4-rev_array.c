#include "main.h"

/**
 *  reverse_array - function which reverse content of array
 *  @a: array
 *  @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int acum, i;

	for (i = n - 1; i > n / 2; i--)
	{
		acum = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = acum;
	}
}
