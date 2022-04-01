#include <stdio.h>

/**
 * main - prints name of the program
 * @argc: args counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), int *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
