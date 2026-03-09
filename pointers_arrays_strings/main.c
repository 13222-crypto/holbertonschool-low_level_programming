#include "main.h"
#include <stdio.h>

/**
 * main - test the _strstr function
 *
 * Return: Always 0
 */
int main(void)
{
	char *haystack = "hello, world";
	char *needle = "world";

	printf("%s\n", _strstr(haystack, needle));
	printf("%s\n", _strstr(haystack, "bye"));
	return (0);
}
