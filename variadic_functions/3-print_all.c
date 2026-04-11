#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: va_list
 */
void print_char(va_list args) { printf("%c", va_arg(args, int)); }

/**
 * print_int - prints an int
 * @args: va_list
 */
void print_int(va_list args) { printf("%d", va_arg(args, int)); }

/**
 * print_float - prints a float
 * @args: va_list
 */
void print_float(va_list args) { printf("%f", va_arg(args, double)); }

/**
 * print_string - prints a string
 * @args: va_list
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	int first;
	type_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	int j;

	va_start(args, format);
	i = 0;
	first = 1;
	while (format && format[i])
	{
		j = 0;
		while (types[j].type != '\0')
		{
			if (format[i] == types[j].type)
			{
				if (!first)
					printf(", ");
				types[j].f(args);
				first = 0;
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
