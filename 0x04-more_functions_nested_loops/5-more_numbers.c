#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 14; i++)
	{
		int r = 0;

		while (r <= 14)
		{
			if (r >= 10)
			{
				_putchar('0' + (r / 10));
			}
			_putchar('0' + (r % 10));
			r++;
		}
		_putchar('\n');
	}
}
