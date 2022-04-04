#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: a pointer to a newly allocated space in memory
 * or NULL otherwise
 */

char *_strdup(char *str)
{
	unsigned int i;
	int j = 0;
	char *strd;

	while (str != '\0')
	{
		i++;
	}
	strd = malloc(sizeof(str) * i);
	if (str == NULL)
	{
		return (NULL);
	}
	while (j >= 0)
	{
		*(strd + j) = *(str + j);
		if (*(str + j) == '\0')
			break;
		j++;
	}
	return (strd);
}
