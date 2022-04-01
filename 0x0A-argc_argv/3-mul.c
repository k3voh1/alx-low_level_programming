#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: args counter
 * @argv: array containing args
 * Return: 0 on success
 * otherwise 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
