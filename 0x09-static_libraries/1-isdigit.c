#include "main.h"
/**
 * _isdigit - function to check for digits
 * @c: entered input to be checked
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
