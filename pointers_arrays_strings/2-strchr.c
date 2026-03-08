#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string pointer
 * @c: character to locate
 *
 * Return: pointer to first occurrence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
