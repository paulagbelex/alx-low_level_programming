#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers starting from 1 and 2
 *
 * Return: result
 */
int main(void)
{
	int i;
	int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	for (i = 0; i < 50; i++)
	{
		printf("%d, ", fibonacci[i]);
	}

	printf("\n");

	return (0);
}
