#include "main.h"
/**
 * print_square - function to print square shape
 * @size: number or size to be printed
 */
void print_square(int size)
{
	int n;
	int m;

	if (size <= 0)
	_putchar('\n');
	for (m = 0; m < size; m++)
	{
		for (n = 0; n < size; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

