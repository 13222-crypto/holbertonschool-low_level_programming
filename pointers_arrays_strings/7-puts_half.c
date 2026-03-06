#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int i;
	int start;

	len = 0;
	while (str[len] != '\0')
		len++;
	start = (len + 1) / 2;
	i = start;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
