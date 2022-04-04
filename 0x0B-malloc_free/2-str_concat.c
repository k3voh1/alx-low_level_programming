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
	int i = 0;
	int j = 0;
	int n = 0;
	char *strc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	strc = malloc(sizeof(char) * (i + j + i));
	if (strc == NULL)
	{
		free(strc);
		return (NULL);
	}
	while (n < j)
	{
		*(s1 + i) = *(s2 + n);
		if (*(s2 + n) == '\0')
			break;
		n++;
		i++;
	}
	while (n < i)
	{
		*(strc + n) = *(s1 + n);
		n++;
	}
	while (m >= 0)
	{
		*(strc + n) = *(s2 + m);
		if (*(s2 + m) == '\0')
		{
			break;
		}
		n++;
		m++;
	}
	return (strc);
}
