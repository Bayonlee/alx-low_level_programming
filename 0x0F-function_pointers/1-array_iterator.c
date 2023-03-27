#include "function_pointers.h"
/**
 * array_iterator - func that execyte a func as a parameter
 * @array: array
 * @size: size
 * @action: khjh
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
