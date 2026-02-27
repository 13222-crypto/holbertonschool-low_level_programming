#include <stdio.h>

/**
 * main - prints sum of even Fibonacci numbers up to 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;
	unsigned long int sum;

	a = 1;
	b = 2;
	sum = 0;
	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%lu\n", sum);
	return (0);
}
