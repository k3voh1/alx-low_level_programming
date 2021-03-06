#include "main.h"

/**
 *_strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: destination
 * @src: source
 * @n: size of the src string
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && *(src + len) != '\0'; len++)
	{
		*(dest + len) = *(src + len);
	}
	while (len < n)
	{
		*(dest + len) = '\0';
		len++;
	}
	return (dest);
}
