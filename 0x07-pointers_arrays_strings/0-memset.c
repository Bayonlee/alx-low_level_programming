#include "main.h"
/**
 * _memset - function to fill memory with constant byte
 * @s: memory area to be returned
 * @b: constanr byte
 * @n: size of byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i += 1;
	}
	return (s);
}
