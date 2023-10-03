#include "main.h"
/**
 * _memcpy - a function that copies memory area/address
 * @dest: where the memory is stored
 * @src: source of copied memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

