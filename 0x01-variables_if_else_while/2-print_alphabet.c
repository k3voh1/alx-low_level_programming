#include <stdio.h>

/**
 * main - Print lower case letters
 * return: Always 0 (success)
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
