#include <stdio.h>

/**
 * main - prints the number of args passed onto it
 * @argc: number of args
 * @argv: array that contains the program args
 * Return: 0 on success
 */

int main (int argc, int *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
