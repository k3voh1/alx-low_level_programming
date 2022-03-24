#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int len = 0;
	int i;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + len) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + len) == input[i])
			{
				*(s + len) = output[i];
				break;
			}
		}
		len++;
	}
	return (s);
}
