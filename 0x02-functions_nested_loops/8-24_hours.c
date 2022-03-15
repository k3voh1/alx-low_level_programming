#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 *
 *Return: void
 */

void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;

	while (hours < 24)
	{
		while (mins < 59)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			mins++;
		}
		mins = 0;
		hours++;
	}
}
