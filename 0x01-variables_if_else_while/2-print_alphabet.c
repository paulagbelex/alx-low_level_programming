#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		char small = tolower(x);

		putchar(small);
	}

	putchar('\n');
	return (0);
}