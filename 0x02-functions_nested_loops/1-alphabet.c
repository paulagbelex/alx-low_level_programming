#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
