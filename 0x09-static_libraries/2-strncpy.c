#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination str to copy to
 * @src: source string to copy
 * @n: bytes amt in src.
 * Return: the pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; i++)
		dest[a] = src[a];
	for (a < n; a++)
		dest[a] = '\0';

	return (dest);
}
