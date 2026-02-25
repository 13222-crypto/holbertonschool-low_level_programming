#include <stdio.h>

/**
 * main - prints numbers 0 to 9 using putchar only
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}
