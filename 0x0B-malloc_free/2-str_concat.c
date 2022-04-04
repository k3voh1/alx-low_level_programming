#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string arg 1
 * @s2: string arg 2
 * Return: pointer to the newly allocated space
 * NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, n = 0;
	char *strc;

	if (*(s1 + i) == '\0' || *(s2 + j) == '\0')
	{
		return (NULL);
	}
	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	strc = malloc(sizeof(char) * (i + j + i));
	while (n < j)
	{
		*(s1 + i) = *(s2 + n);
		if (*(s2 + n) == '\0')
			break;
		n++;
		i++;
	}
	return (strc);
}
