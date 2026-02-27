#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			result = i * j;
			if (j != 0)
				_putchar(',');
			if (j == 0)
			{
				_putchar('0' + result);
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
				_putchar('0' + result);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
