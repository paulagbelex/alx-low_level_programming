#include "main.h"
/**
 * print_rev - function that prints the reverse of a string
 *
 * @s: holds the value
 *
 */
void print_rev(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	print_rev(s + 1);
	_putchar(*s);
}
