#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	int hexint;
	char hexalp;

	for (hexint = '0'; hexint <= '9' ; hexint++)
	{
		putchar(hexint);
	}

	for (hexalp = 'a'; hexalp <= 'f'; hexalp++)
	{
		putchar(hexalp);
	} 
	putchar('\n');

	return (0);
}
