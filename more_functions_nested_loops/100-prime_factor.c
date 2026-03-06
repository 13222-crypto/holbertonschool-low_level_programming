#include <stdio.h>
#include <math.h>

/**
 * main - finds largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int d;
	double n;
	double largest;

	n = 612852475143.0;
	largest = 1;
	d = 2;
	while ((double)d * (double)d <= n)
	{
		while (fmod(n, d) == 0)
		{
			largest = d;
			n /= d;
		}
		d++;
	}
	if (n > 1)
		largest = n;
	printf("%.0f\n", largest);
	return (0);
}
