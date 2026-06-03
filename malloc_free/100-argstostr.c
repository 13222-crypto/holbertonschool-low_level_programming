#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the new string, or NULL if ac == 0, av == NULL,
 * or if the function fails to allocate memory.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* حساب الطول الإجمالي المطلوب لحجز الذاكرة بدقة */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* من أجل سطر جديد '\n' بعد كل وسيط */
	}
	len++; /* من أجل الخانة الصفرية للنص '\0' */

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	/* نسخ النصوص وإضافة السطور الجديدة */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
