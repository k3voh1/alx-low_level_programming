#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * @argc: number of args
 * @argv: the arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	o = get_op_func(argv[2]);
	if (o == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", o(a, b));
	return (0);
}
