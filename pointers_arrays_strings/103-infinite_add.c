#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 * Return: pointer to result or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l1 = 0, l2 = 0, d, c = 0;

	while (n1[l1])
		l1++;
	while (n2[l2])
		l2++;
	if (l1 >= size_r || l2 >= size_r)
		return (0);
	for (i = l1 - 1, j = l2 - 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		d = c;
		if (i >= 0)
			d += n1[i] - '0';
		if (j >= 0)
			d += n2[j] - '0';
		if (i < 0 && j < 0 && d == 0)
			break;
		c = d / 10;
		r[k] = (d % 10) + '0';
	}
	if (c != 0)
		return (0);
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		d = r[i];
		r[i] = r[j];
		r[j] = d;
	}
	return (r);
}
