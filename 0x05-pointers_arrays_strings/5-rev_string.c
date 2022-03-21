#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int len = 0;
	int x = 0;
	int tmp;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (len--)
	{
		if (x > len)
			break;
		tmp = s[x];
		s[x] = s[len];
		s[len] = tmp;
		x++;
	}
}
