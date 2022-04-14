#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *b;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		b = va_arg(list, char *);
		if (!b)
			b = "(nil)";
		if (!separator)
			printf("%s", b);
		else if (separator && i == 0)
			printf("%s", b);
		else
			printf("%s%s", separator, b);
	}
	va_end(list);
	printf("\n");
}
