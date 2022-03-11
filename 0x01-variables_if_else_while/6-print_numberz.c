#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '1'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
