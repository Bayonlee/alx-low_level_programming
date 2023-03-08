#include "main.h"
/**
 * is_prime_number - prime main function
 * @n: number to be checked
 * Return: primeno function
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primeno(n, 2));
}
/**
 * primeno - check whether it's a prime  no
 * @a: same as n
 * @b: iterator
 * Return: prime number
 */
int primeno(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (primeno(a, b + 1));
}
