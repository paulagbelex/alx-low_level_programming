#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int d1 = 0, d2 = 1, d3 = 2;

	while (d1 <= 9)
	{
		putchar(d1 + '0');
		putchar(d2 + '0');
		putchar(d3 + '0');
		putchar(',');
		putchar(' ');
		d1++;

		if (d1 == d2)
			d2++;
		if (d1 == d3 || d2 == d3)
			d3++;
	}
	putchar('\n');
	return (0);
}

