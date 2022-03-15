#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@r: number to be checked
 *Return: value of the last digit
 */

int print_last_digit(int r)
{
	int n;

	n = r % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
