#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@r: number to be checked
 *Return: value of the last digit
 */

int print_last_digit(int r)
{
	if (r < 0)
		r *= -1;
	_putchar('0' + (n % 10));
	return (r % 10);
}
