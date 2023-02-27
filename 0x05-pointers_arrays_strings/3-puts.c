#include "main.h"
#include <stdio.h>
/**
 * _puts - function to output a str stored in the memory *str
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
