#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != 9)
		{
			putchar(num);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	
	return (0);
}
