#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
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

	/* حساب طول النص الأصلي */
	while (str[len] != '\0')
		len++;

	/* حجز مساحة (طول النص + 1 لمكان الـ null terminator) */
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	/* نسخ النص إلى المكان الجديد */
	for (i = 0; i <= len; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
