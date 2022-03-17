#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */

void print_square(int size)
{
	int i;

	int j = 0;

	if (size > 0)
	{
		while (j < 0)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
