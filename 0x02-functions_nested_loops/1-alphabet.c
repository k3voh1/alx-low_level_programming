#include "main.h"

/**
 *main - prints the alphabet in lowercase
 *
 * return: 0
 */

void print_alphabet(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');

	return (0);
}
