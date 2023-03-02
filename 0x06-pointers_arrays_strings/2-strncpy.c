#include "main.h"
/**
 * _strncpy -  function to copy sring from source to dest
 * @dest: destination string
 * @src: source string
 * @n: no of string to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
