#include "main.h"

/**
 * reverse_array - function to reverse string
 * @a:string
 * @n: string
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
