#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to a function_name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
