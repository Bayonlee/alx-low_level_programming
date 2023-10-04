#include "main.h"
/**
 * _puts - prints a string and a newline
 * @s: pointer to the string to be print
 * Return: void
 */
void _puts(char *s)
{
	int a = 0;

	while (s[a])
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
