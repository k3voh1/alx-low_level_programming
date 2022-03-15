#include "main.h"

/**
 *main - prints the alphabet in lowercase
 *
 * return: 0
 */

int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');

	return (0);
}
