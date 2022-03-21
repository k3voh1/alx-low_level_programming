#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d, ", *(a + x));
	}
	_putchar('\n');
}
