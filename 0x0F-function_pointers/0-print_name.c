#include <stddef.h>
/**
 * print_name - function that prints name
 *
 * @name: takes the parameter of name
 * @f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	{
		return;
	}
	f(name);
}
