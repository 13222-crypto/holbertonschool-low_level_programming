#include "main.h"
#include <stdio.h>

/**
 * main - test the _strpbrk function
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);

	if (t != NULL)
	{
		printf("%s\n", t);
	}
	return (0);
}
