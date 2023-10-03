#include "main.h"
/**
 * _strlen -func that cal the length of a string
 * @s: input string to be counted
 * Return: length of a string
 */
int _strlen(char *s)
{
	int a = 0;
	while (*(s + a) != '\0')
		a++;
	return (a);
}
