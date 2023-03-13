#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - function to create arrays of size size and char c
 * @size: size of array to be created
 * @c: char c
 * Return: pointer ro array and null for fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}