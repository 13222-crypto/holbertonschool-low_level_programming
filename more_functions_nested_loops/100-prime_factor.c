#include <stdio.h>
#include <math.h>

/**
 * main - finds largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long long n;
	long long i;
	long long largest;

	n = 612852475143;
	largest = 1;
	i = 2;
	while (i <= sqrt(n))
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
		i++;
	}
	if (n > 1)
		largest = n;
	printf("%lld\n", largest);
	return (0);
}
