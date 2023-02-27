#include "main.h"
/**
 * _strlen -  function to return the length of a string
 * @s: integer s
 * Return: i as length of string
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
