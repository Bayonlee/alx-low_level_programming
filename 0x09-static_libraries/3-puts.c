#include "main.h"
/**
 * _puts - prints a string and a newline
 * @str: pointer to the string to be print
 * Return: void
 */
void _puts(char *str)
{
	int a = 0;
	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
