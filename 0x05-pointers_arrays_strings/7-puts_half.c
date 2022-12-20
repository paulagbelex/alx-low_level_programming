#include <string.h>
#include "main.h"
/**
 * puts_half - entry point to print half the data
 *
 * @str: holds the value...
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int half = len / 2;

	for (i = half; i < len; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
