#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int num = 0;

	while (num < 16)
	{
		if (num > 9)
		{
			putchar(num + 'a' - 10);
		} else
		{
			putchar(num + '0');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
