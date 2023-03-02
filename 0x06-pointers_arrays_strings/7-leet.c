#include "main.h"
/**
 * leet - function to encode input  into 1337speak
 * @n: value to be encodded
 * Return: n v
 */
char *leet(char *n)
{
	int i, j;
	char a1[] = "aAeEoOtTlL";
	char a2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == a1[j])
			{
				n[i] = a2[j];
			}
		}
	}
	return (n);
}

