#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int w, x, y, z;
	int coins[] = {25, 10, 5, 2, 1};

	w = x = y = z = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	if (x <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[w] != '\0')
	{
		if (x >= coins[w])
		{
			z = (x / coins[w]);
			y += z;
			x -= coins[w] * z;
		}
		w++;
	}
	printf("%d\n", y);

	return (0);
}
