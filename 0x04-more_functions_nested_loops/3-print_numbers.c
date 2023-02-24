#include "main.h"
/**
 * print_numbers - function to print num
 * @i: function to check
 * Return: 0 successful
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		_putchar('\n');
	}
	return (0);
}

