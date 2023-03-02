#include "main.h"
/**
 * _strcat -  function to concatenate two strings
 * @dest: destination to be concatenated to
 * @src: word to add to the dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lentdest;
	int sourcelen;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		lentdest++;
	for (i = 0; src[i] != '\0'; i++)
		sourcelen++;
	for (i = 0; i <= sourcelen; i++)
		dest[lentdest + i] = src[i];
	return (dest);
}
