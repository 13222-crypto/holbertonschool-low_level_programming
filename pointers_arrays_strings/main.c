#include "main.h"

/**
 * main - test the _memset function
 *
 * Return: Always 0
 */
int main(void)
{
	char buffer[98];
	char buffer2[98];

	simple_print_buffer(buffer, 98);
	_memset(buffer, 'a', 95);
	simple_print_buffer(buffer, 98);
	_memset(buffer2, 1, 10);
	simple_print_buffer(buffer2, 98);
	return (0);
}
