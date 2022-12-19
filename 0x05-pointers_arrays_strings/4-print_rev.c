#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints the reverse of a string
 *
 * @s: holds the value
 *
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len-- > 0)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
