#include "main.h"
#include <stdlib.h>

int count_words(char *str);
char **free_grid_words(char **words, int i);

/**
 * count_words - Helper function to count the number of words in a string.
 * @str: The string to evaluate.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
	int i, words = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			words++;
		}
	}
	return (words);
}

/**
 * free_grid_words - Helper function to free allocated words matrix on failure.
 * @words: The matrix to free.
 * @i: The index up to which memory was allocated.
 *
 * Return: NULL.
 */
char **free_grid_words(char **words, int i)
{
	while (i >= 0)
	{
		free(words[i]);
		i--;
	}
	free(words);
	return (NULL);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j, k, w_count, len, start;

	if (str == NULL || *str == '\0')
		return (NULL);

	w_count = count_words(str);
	if (w_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (w_count + 1));
	if (words == NULL)
		return (NULL);

	for (j = 0; j < w_count; j++)
	{
		while (str[i] == ' ')
			i++;

		start = i;
		len = 0;
		while (str[i] != ' ' && str[i] != '\0')
		{
			len++;
			i++;
		}

		words[j] = malloc(sizeof(char) * (len + 1));
		if (words[j] == NULL)
			return (free_grid_words(words, j - 1));

		for (k = 0; k < len; k++)
			words[j][k] = str[start + k];
		words[j][k] = '\0';
	}
	words[j] = NULL;

	return (words);
}
