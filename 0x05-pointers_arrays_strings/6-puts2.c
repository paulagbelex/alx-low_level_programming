#include <stdio.h>
/**
 * puts2 - entry point
 *
 * @str: hold the value
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		printf("%c", *(str + i));
		i += 2;
	}
	printf("\n");
}
