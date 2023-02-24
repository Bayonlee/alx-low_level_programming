#include "main.h"
/**
 * _isdigit - function to check for zero to nine
 * Return: 1 if its digit and 0 if its not 
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
