#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 0)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
