#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	unsigned int nb;

	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb / 10 != 0)
		print_number(nb / 10);
	_putchar('0' + nb % 10);
}
