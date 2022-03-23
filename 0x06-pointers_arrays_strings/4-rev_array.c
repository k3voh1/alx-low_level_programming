#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int y = n - 1;
	int len = 0;
	int tmp;

	while (y--)
	{
		tmp = *(a + len);
		*(a + len) = *(a + y);
		*(a + y) = tmp;
		if (len > y)
			break;
		len++;
	}
}
