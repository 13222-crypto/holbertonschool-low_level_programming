#include <stdio.h>
#include <string.h>

/**
 * add_numbers - adds two large numbers stored as strings
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
	int la;
	int lb;
	char tmp[50];

	la = strlen(a);
	lb = strlen(b);
	i = la - 1;
	j = lb - 1;
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
	for (i = 0; i < k; i++)
		result[i] = tmp[k - 1 - i];
	result[k] = '\0';
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

	strcpy(a, "1");
	strcpy(b, "2");
	i = 1;
	while (i <= 98)
	{
		if (i < 98)
			printf("%s, ", a);
		else
			printf("%s", a);
		add_numbers(a, b, c);
		strcpy(a, b);
		strcpy(b, c);
		i++;
	}
	printf("\n");
	return (0);
}
