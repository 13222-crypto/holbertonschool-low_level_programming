#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;
	int i;

	a = 1;
	b = 2;
	i = 1;
	while (i <= 50)
	{
		if (i < 50)
			printf("%lu, ", a);
		else
			printf("%lu", a);
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	printf("\n");
	return (0);
}
