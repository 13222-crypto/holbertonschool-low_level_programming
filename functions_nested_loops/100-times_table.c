#include "main.h"

/**
 * print_cell - prints a cell of the times table
 * @result: the value to print
 * @first: 1 if first column, 0 otherwise
 */
void print_cell(int result, int first)
{
	if (first)
	{
		_putchar('0' + result);
		return;
	}
	_putchar(',');
	_putchar(' ');
	if (result >= 100)
	{
		_putchar('0' + result / 100);
		_putchar('0' + (result / 10) % 10);
		_putchar('0' + result % 10);
	}
	else if (result >= 10)
	{
		_putchar(' ');
		_putchar('0' + result / 10);
		_putchar('0' + result % 10);
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + result);
	}
}

/**
 * print_times_table - prints the n times table
 * @n: the number
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
		return;
	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			print_cell(i * j, j == 0);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
