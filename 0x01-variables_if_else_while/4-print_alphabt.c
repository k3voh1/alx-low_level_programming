#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alp;

	alp = 'a';
	while (alp != 'q' && alp != 'e')
	{
		putchar(alp);
		alp++;

	}
	putchar('\n');

	return (0);
}
