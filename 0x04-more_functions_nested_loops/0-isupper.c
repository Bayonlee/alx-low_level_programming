#include "main.h"
/**
 * _isupper - function to check uppercase
 * Return: 1 if upper and 0 if lower 
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
