#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: args counter
 * @argv: array containing args of a program
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
