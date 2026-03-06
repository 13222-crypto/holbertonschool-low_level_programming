#include <stdio.h>
#include <math.h>

/**
 * main - finds largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	double n;
	double i;
	double largest;

	n = 612852475143.0;
	largest = 1;
	i = 2;
	while (i <= sqrt(n))
	{
		while ((int)(n / i) * i == n)
		{
			largest = i;
			n /= i;
		}
		i++;
	}
	if (n > 1)
		largest = n;
	printf("%.0f\n", largest);
	return (0);
}
