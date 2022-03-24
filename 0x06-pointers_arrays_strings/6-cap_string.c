#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: pointer to the string
 */

char *cap_string(char *str)
{
	int len = 0;
	int i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((*(str + len) >= 97) && (*(str + len) <= 122))
	{
		*(str + len) = *(str + len) - 32;
	}
	while (*(str + len) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + len) == sep_words[i])
			{
				if ((*(s + (len + 1)) >= 97) && (*(s + (len + 1)) <= 122))
					*(s + (len + 1)) = *(s + (len + 1)) - 32;
				break;
			}
		}
		len++;
	}
	return (str);
}
