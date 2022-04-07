#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: byte size
 * Return: pointer to the allocated memory
 * NULL otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 1; i <= nmemb; i++)
	{
		array[i - 1] = 0;
	}
	return (array);
}
