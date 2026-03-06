#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * Return: pointer to result or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l, m, n, carry = 0;

	while (n1[i])
		i++;
	while (n2[j])
		j++;
	if (i >= size_r || j >= size_r)
		return (0);
	i--, j--, size_r--;
	for (k = 0; i >= 0 || j >= 0 || carry; k++)
	{
		if (k >= size_r)
			return (0);
		n = carry;
		if (i >= 0)
			n += n1[i--] - '0';
		if (j >= 0)
			n += n2[j--] - '0';
		r[k] = (n % 10) + '0';
		carry = n / 10;
	}
	r[k] = '\0';
	for (l = 0, m = k - 1; l < m; l++, m--)
	{
		n = r[l];
		r[l] = r[m];
		r[m] = n;
	}
	return (r);
}
