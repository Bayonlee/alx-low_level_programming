#include "main.h"
/*
 * _strcmp - compares two strings
 * @s1: string.
 * @s2: string.
 * Return: 0 if s1 and s2 are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, a = 0;
	while (a == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		a = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (a);
}
