#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: 0 if s1 and s2 are equals
 * <0 or >0 if else
 */

int _strcmp(char *s1, char *s2)
{
	int len = 0;
	int diff = 0;

	while (diff == 0)
	{
		if ((*(s1 + len) == '\0') && (*(s2 + len) == '\0'))
			break;
		op = *(s1 + len) - *(s2 + len);
		len++;
	}
	return (diff);
}
