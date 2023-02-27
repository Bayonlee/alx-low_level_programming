#include "main.h"
/**
 * swap_int - function to swap intergers
 * @a: integer a
 * @b: interger b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
