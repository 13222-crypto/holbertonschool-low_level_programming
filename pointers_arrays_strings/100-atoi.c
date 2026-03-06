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
	unsigned int result;
	int i;

	sign = 1;
	result = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = sign * -1;
		else if (s[i] == '+')
			sign = sign * 1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (result > 0)
			break;
		i++;
	}
	return ((int)result * sign);
}
