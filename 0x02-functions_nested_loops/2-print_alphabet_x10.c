#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 *return: 0
 */

void print_alphabet_x10(void)
{
	int i = 1;
	int alp;

	while(i <= 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
