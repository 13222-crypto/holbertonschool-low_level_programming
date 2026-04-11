#include <stdio.h>
#include <stdlib.h>
#include "3-op_functions.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	for (i = 0; ops[i].op != NULL; i++)
	{
		if (argv[2][0] == ops[i].op[0])
		{
			printf("%d\n", ops[i].f(num1, num2));
			return (0);
		}
	}
	printf("Error\n");
	exit(98);
}
