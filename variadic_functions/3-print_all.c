#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *s;
	int first;

	va_start(args, format);
	i = 0;
	first = 1;
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			if (!first)
				printf(", ");
			printf("%c", va_arg(args, int));
			first = 0;
		}
		else if (format[i] == 'i')
		{
			if (!first)
				printf(", ");
			printf("%d", va_arg(args, int));
			first = 0;
		}
		else if (format[i] == 'f')
		{
			if (!first)
				printf(", ");
			printf("%f", va_arg(args, double));
			first = 0;
		}
		else if (format[i] == 's')
		{
			if (!first)
				printf(", ");
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			first = 0;
		}
		else
			va_arg(args, int);
		i++;
	}
	va_end(args);
	printf("\n");
}
