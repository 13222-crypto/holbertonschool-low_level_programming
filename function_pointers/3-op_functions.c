#include "3-op_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_add(int a, int b) { return (a + b); }

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_sub(int a, int b) { return (a - b); }

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_mul(int a, int b) { return (a * b); }

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}

/**
 * op_mod - modulo of two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}
