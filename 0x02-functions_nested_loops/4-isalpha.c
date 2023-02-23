#include  "main.h"
/**
 * _isalpha - check for alphabets character
 * @c: character to be checkeed
 * Return: 1 for lowercase and 0 for uppercaase
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c <= 65 && c >= 90))
		return (1);
	else
		return (0);
}
