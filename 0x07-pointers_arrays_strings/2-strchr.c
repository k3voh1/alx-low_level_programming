#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be searched
 * Return: pointer to the first occurrence of the character c
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else
			return (NULL);
}
