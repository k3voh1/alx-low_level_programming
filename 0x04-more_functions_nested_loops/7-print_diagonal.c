#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int r, j;

	if (n > 0)
	{
		for (r = 1; r <= n; r++)
		{
			for (j = 1; j <= r; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
}
