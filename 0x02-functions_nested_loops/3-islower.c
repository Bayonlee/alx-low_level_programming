#include "main.h"
/**
 * _islower - checks for lower case char
 * c: alphabet to be checkedd
 * Return: 1 for lowercase and 0 for uppercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		else
			return (0);
}
