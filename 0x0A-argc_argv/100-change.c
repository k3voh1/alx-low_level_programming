#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: args counter
 * @argv: array containing args
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, cents;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argc[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
		{
			cents -= 1;
		}
		i += 1;
	}
	printf("%d\n", i);
	return (0);
}
