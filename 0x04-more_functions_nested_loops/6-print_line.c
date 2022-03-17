#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character will be printed
 */

void print_line(int n)
{
	int r = 0;

	if (n > 0)
	{
		while (r < n)
		{
			_putchar('_');
			r++;
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
