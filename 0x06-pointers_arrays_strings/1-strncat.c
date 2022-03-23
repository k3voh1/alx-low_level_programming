#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: amount of bytes in src string
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int len2 = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}
	while (len2 < n)
	{
		*(dest + len) = *(src + len2);
		if (*(src + len2) == '\0')
			break;
		len++;
		len2++;
	}
	return (dest);
}
