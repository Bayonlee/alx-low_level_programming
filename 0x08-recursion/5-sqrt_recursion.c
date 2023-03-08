#include "main.h"
/**
 * _sqrt_recursion - function to print square root
 * @n: square root of number to be printed
 * Return: the square root
 * helpersqr - helper function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helpersqr(n, 0));
}
int helpersqr(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (helpersqr(n, m + 1));
}
