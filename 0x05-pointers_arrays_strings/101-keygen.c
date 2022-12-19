#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */

#define PASSWORD_LENGTH 8

int main(void)
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int r = rand() % 94 + 33;

		password[i] = (char)r;
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("Generated password: %s\n", password);

	return (0);
}
