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
	int i, j, n, m;
	char *strc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	strc = malloc(sizeof(char) * (i + j + 1));
	if (strc == NULL)
	{
		free(strc);
		return (NULL);
	}
	for (n = 0; n < i; n++)
		*(strc + n) = *(s1 + n);
	for (m = 0; m <= j; m++)
		*(strc + n) = *(s2 + m);
	return (strc);
}
