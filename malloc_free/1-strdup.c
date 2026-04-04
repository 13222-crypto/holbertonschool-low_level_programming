#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 * or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
