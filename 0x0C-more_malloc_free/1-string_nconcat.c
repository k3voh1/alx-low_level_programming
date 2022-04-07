#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string arg 1
 * @s2: string arg 2
 * Return: pointer shall point to a newly allocated space in memory
 * NULL otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int i, j, len, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	if (n >= j)
		n = j;
	len = i + n;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	for (z = 0; z < len; z++)
	{
		if (z < i)
			str[z] = s1[z];
		else
			str[z] = s2[z - i];
	}
	str[z] = '\0';
	return (str);
}
