#include "function_pointers.h"
/**
 * int_index - index return, if not  -1
 * @array: array of functns
 * @size: number of arrays
 * @cmp: cmp to one of 3
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
