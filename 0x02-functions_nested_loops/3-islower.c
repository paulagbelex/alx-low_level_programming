#include "main.h"
/**
 * _islower - entry point to check for lowercase
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
	{
		return (0);
	}
}
