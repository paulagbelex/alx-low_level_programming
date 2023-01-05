#include "main.h"
/**
 * _puts_recursion - name of the function
 *
 * @s: holds the value
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
