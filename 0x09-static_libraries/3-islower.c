#include "main.h"
/**
 * _islower - function to check for lowercase
 * @c: input int
 * Return: 1 if int and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= "z")
		return (1);
	else
		return (0);
}
