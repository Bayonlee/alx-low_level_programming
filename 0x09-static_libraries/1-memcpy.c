#include "main.h"
/**
 * _memcpy - function to copy memory area
 * @dest: destination to be copied to
 * @src: memory source to be copied
 * @n: size of mempry
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i += 1;
		j += 1;
	}
	return (dest);
}
