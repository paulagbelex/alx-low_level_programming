#include <string.h>
#include "main.h"
/**
 * puts_half - entry point to print half the data
 *
 * @str: holds the value...
 */
void puts_half(char *str)
{
	int c, a;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
	}
	if (c % 2 == 0)
	{
		for ((a = c / 2); str[a] != 0; a++)
		{
			l = str[a];
			_putchar(l);
		}
	}
	_putchar('\n');
}
