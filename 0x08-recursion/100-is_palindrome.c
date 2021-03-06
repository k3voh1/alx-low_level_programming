#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be counted
 * Return: length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * compare - compares letters in the string s
 * @beg: characters at the front
 * @end: characters at the rear
 * Return: 1 or 0
 */

int compare(char *beg, char *end)
{
	if (beg > end)
		return (1);
	else if (*beg == *end)
		return (compare(beg + 1, end - 1));
	else
		return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
