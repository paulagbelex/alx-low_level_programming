#include "main.h"
/**
 * more_numbers - prints numbers 10 times
 */
void more_numbers(void)
{
	int count;
	int i;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
