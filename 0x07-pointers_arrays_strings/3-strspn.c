#include "main.h"
/**
 * _strspn -function to search for string of any byte
 * @s: first segment
 * @accept: byte to be checked
 * Return: unsigned int a
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int j = 0;
	int d;

	while (*s != '\0')
	{
		d = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
				d = 1;
			j += 1;
		}
		j = 0;
		if (d == 0)
			break;
		a += 1;
		s++;
	}
		return  (a);
}
