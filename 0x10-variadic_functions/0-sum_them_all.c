#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: no og args
 * Return: sum of all args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_args(list, int);
	}
	va_end(list);
	return (sum);
}
