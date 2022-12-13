#include "main.h"
/**
 * print_sign - prints signs (+, -, and 0)
 *
 * @n: is the placeholder
 *
 * Return: results
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
	_putchar('\n');
}
