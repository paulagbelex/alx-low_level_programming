#include <string.h>
#include "main.h"
/**
 * puts_half - entry point to print half the data
 *
 * @str: holds the value...
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int half = len / 2;
	int i = half;

	if (len % 2 == 1)
	{
		half = (len - 1) / 2;
	}
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
