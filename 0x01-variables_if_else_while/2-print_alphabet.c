#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
char alp = 'a';
while (alp <= 'z')
	{
	putchar(alp);
	alp++;
	}
putchar('\n');
return (0);
}
