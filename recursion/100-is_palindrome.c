#include "main.h"

/**
 * pal_helper - helper to check palindrome
 * @s: the string
 * @start: start index
 * @end: end index
 *
 * Return: 1 if palindrome, 0 if not
 */
int pal_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (pal_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if string is palindrome, 0 if not
 * @s: the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	if (*s == '\0')
		return (1);
	len = 0;
	while (s[len])
		len++;
	return (pal_helper(s, 0, len - 1));
}
