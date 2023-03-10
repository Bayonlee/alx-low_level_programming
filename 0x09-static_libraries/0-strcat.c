#include "main.h"
/**
 * _strcat - function to concat string
 * @dest: destination string to concat to
 * @src: spurce string to be concatenated to dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
