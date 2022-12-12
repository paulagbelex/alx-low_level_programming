#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0;
	int b = 1;

	while (a < 10)
	{
		putchar(a + '0');
		putchar(b + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		b++;

		if (b > 9)
		{
			b = a + 1;
			a++;
		}
	}
	putchar('\n');
	return (0);
}
