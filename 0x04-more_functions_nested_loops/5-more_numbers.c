#include "main.h"

/**
 * more_numbers - prints from 0 to 14
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 11; i++)
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
