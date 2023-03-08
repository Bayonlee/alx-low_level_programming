#include "main.h"
/**
 * factorial - function that prints the function of a number
 * @n: input number to be found
 * Return: 1 if n is 0 and -1 if n is less than 0 else return  factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
