#include "main.h"
#include <stdio.h>

/**
 * main - test the print_diagsums function
 *
 * Return: Always 0
 */
int main(void)
{
	int c3[3][3] = {
		{0, 1, 5},
		{10, 11, 12},
		{20, 21, 22}
	};
	int c5[5][5] = {
		{0, 1, 2, 3, 4},
		{5, 6, 7, 8, 9},
		{10, 11, 12, 13, 14},
		{15, 16, 17, 18, 19},
		{20, 21, 22, 23, 24}
	};

	print_diagsums((int *)c3, 3);
	print_diagsums((int *)c5, 5);
	return (0);
}
