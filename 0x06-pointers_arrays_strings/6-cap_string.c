#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: pointer to the string
 */

char *cap_string(char *str)
{
	int len = 0;

	if ((*(str + len) >= 97) && (*(str + len) <= 122))
	{
		*(str + len) = *(str + len) - 32;
	}
	while (*(str + len) != '\0')
}
