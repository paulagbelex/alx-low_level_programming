#include <stddef.h>
/**
 * array_iterator - name of the fumction
 * @array: first parameter
 * @size: unsigned interal type
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == 0 || size == 0)
	{
		return;
	}

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
