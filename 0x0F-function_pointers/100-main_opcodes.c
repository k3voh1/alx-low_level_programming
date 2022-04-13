#include <stdio.h>
#include <stdlib.h>

/**
 * main - ints the opcodes of its own main function
 * @argc: number of args
 * @argv: the func arg
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int bytes, a;
	char *b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	b = (char *)main;
	for (a = 0; a < byes; a++)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", b[a]);
			break;
		}
		printf("%02hhx ", b[a]);
	}
	return (0);
}
