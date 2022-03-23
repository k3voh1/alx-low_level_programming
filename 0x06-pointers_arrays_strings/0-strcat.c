#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int len2 = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}
	while (len2 >= 0)
	{
		*(dest + len) = *(src + len2);
		if (*(src + len2) == '\0')
			break;
		len2++;
		len++;
	}
	return (dest);
}
