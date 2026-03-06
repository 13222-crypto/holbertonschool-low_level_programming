#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));

	while (sum <= 2645)
	{
		c = rand() % 128;
		if (c > 32)
		{
			putchar(c);
			sum += c;
		}
	}
	putchar(2772 - sum);
	return (0);
}
