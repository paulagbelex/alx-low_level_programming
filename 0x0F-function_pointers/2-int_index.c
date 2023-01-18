/**
 * int_index - name of function
 * @array: first parameter
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
