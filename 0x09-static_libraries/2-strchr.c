#include "main.h"
#include <stdio.h>
/**
 * _strchr - function tolocate character in a string
 * @s: string to recieve and return
 * @c: character to be recieved
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
