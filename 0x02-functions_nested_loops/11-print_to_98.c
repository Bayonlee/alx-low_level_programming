#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function to iterate from n to 98
 * Return: 0
 */
void print_to_98(int n)
{
	int i;
	
	for (i = n; i <= 98; i++)
	_putchar(i + '0');
	_putchar(',');
	_putchar(' ');
}
