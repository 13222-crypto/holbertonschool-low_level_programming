#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value, or 0 if no numbers in string
 */
int _atoi(char *s)
{
	int sign;
	int result;
	int digit_found;

	sign = 1;
	result = 0;
	digit_found = 0;
	while (*s != '\0')
	{
		if (*s == '-' && digit_found == 0)
		{
			sign *= -1;
		}
		else if (*s == '+' && digit_found == 0)
		{
			sign *= 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit_found = 1;
			result = result * 10 + (*s - '0');
		}
		else if (digit_found == 1)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
