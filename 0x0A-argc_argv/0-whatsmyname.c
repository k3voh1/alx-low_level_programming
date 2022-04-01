#include <stdio.h>

/**
 * main - prints name of the program
 * @argc: args counter
 * @argv: pointer to array of arguments
 * Return: 0 on successs
 */

int main(int argc, int *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
