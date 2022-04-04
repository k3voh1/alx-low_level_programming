#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to an array of int
 * NULL otherwise
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int r, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (r = 0; r < height; r++)
	{
		arr[r] = malloc(width * sizeof(int));
		if (arr[r] == NULL)
		{
			for (r = 0; r < height; r++)
				free(arr[r]);
			free(arr);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			arr[r][c] = 0;
	}
	return (arr);
}
