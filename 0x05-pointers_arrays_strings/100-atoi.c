#include "main.h"
/**
 * _atoi - entry point
 *
 * @s: hold the value
 *
 * Return: always 0
 */
int _atoi(char *s)
{
	int number = 0;
	int minus = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
		{
			minus++;
		}
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			if (number > 0)
			{
				number = number * 10 + (*(s + i) - '0');
			}
				number = *(s + i) - '0';
		}
		if (number != 0 && (*(s + i) < '0' || *(s + i) > '9'))
		{
			break;
		}
		i++;
	}
	if (number == 0)
	{
		return (0);
	}
	if (minus % 2 == 0)
	{
		return (number);
	}
	return (number * (-1));
}
