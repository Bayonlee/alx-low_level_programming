#include "main.h"
/**
 * print_rev -  funvtion to print reverse string
 * @s: string tyo be reversed
 */
void print_rev(char *s)
{
	int i = 0;
	int l;

	while (s[i] != '\0')
		i++;

	for (l = i - 1; l >= 0; l--)
	{
		_putchar(*(s + l));
	}
	_putchar('\n');
}
