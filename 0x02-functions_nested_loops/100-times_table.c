#include "main.h"
/**
 * print_times_table - prints the time table but ignores 15 and 0
 *
 * @n: prints the time table
 *
 */
void print_times_table(int n)
{
	int j, i;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				_putchar((i * j / 10) + '0');
				_putchar((i * j % 10) + '0');
				_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
