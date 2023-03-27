#include "function_pointer.h"
/**
 * int_index - function to search for an integer
 * @array: arg array
 * @size: size of int
 * @cmp: arg cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
