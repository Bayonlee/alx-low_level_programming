#include "main.h"
#include <stdio.h>
/**
 * _strstr - function to locate substring
 * @haystack: string to be searched
 * @needle: susbstring to be located
 * Return: '\0'
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*a = '\0')
			return (haystack);
	}
	return (NULL);
}

