#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print elements of an array
 * @n: number of element to be printed
 * @a: array name
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

