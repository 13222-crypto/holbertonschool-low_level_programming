#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int n;
	int i;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (unsigned char *)main;
	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%02x", p[i]);
	}
	printf("\n");
	return (0);
}
