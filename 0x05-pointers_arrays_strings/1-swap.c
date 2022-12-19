#include "main.h"
/**
 * swap_int - function that swaps two integers using pointers
 *
 * @a: holds th evalue of the first integer
 * @b: holds the falue of the second integer
 *
 */
void swap_int(int *a, int *b)
{
	int swa;

	swa = *a;
	*a = *b;
	*b = swa;
}
