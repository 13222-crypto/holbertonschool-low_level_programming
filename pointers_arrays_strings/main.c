#include "main.h"
#include <string.h>

/**
 * main - test the _memcpy function
 *
 * Return: Always 0
 */
int main(void)
{
	char buffer[98];
	char buffer2[98];
	char buffer3[98];
	char buffer4[98];

	strcpy(buffer, "This is a string");
	strcpy(buffer2, "This is a string");
	strcpy(buffer3, "This is a string");
	strcpy(buffer4, "This is a string");

	simple_print_buffer(buffer, strlen(buffer));
	_memcpy(buffer + 5, buffer2, 8);
	simple_print_buffer(buffer, strlen(buffer));
	_memcpy(buffer3, buffer4, strlen(buffer4));
	simple_print_buffer(buffer3, strlen(buffer4));
	_memcpy(buffer4, "garbage can", 6);
	simple_print_buffer(buffer4, strlen(buffer4));
	return (0);
}
