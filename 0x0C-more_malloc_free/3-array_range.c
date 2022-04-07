#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: lowest int arg in array
 * @max: highest int arg in array
 * Return: pointer to the newly created array
 * NULL otherwise
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array = NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
