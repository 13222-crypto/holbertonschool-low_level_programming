#include <stdio.h>

/**
 * add_numbers - adds two large numbers stored as char arrays
 * @a: first number
 * @b: second number
 * @result: output buffer
 */
void add_numbers(char *a, char *b, char *result)
{
	int i;
	int j;
	int k;
	int carry;
	int sum;
	char tmp[50];

	i = 0;
	j = 0;
	while (a[i])
		i++;
	while (b[j])
		j++;
	i--;
	j--;
	k = 0;
	carry = 0;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += a[i--] - '0';
		if (j >= 0)
			sum += b[j--] - '0';
		tmp[k++] = '0' + sum % 10;
		carry = sum / 10;
	}
	tmp[k] = '\0';
	i = 0;
	while (i < k)
	{
		result[i] = tmp[k - 1 - i];
		i++;
	}
	result[k] = '\0';
}

/**
 * copy_str - copies string from src to dst
 * @dst: destination
 * @src: source
 */
void copy_str(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[50];
	char b[50];
	char c[50];
	int i;

	a[0] = '1';
	a[1] = '\0';
	b[0] = '2';
	b[1] = '\0';
	i = 1;
	while (i <= 98)
	{
		if (i < 98)
			printf("%s, ", a);
		else
			printf("%s", a);
		add_numbers(a, b, c);
		copy_str(a, b);
		copy_str(b, c);
		i++;
	}
	printf("\n");
	return (0);
}
