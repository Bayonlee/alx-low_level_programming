#include "main.h"
/**
 * _strlen_recursion - function to print length of a string
 * @s: string to be checked
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
