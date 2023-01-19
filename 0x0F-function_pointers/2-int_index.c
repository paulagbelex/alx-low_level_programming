/**
 * int_index - name of function
 * @array: first parameter
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: result
 */

(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				}
			{
				return (i);
			}
	}
	return (-1);
}
