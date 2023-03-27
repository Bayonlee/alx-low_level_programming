#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function to add two numbers
  * @a: int a
  * @b: int b
  *
  * Return: a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function to subtract two int
  * @a: int a
  * @b: int b
  *
  * Return: a-b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function to multiply two int
  * @a: int a
  * @b: int b
  *
  * Return: a * b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function to divide two int
  * @a: int a
  * @b: int b
  *
  * Return: a/b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function to find modulus
  * @a: int a 
  * @b: int b
  *
  * Return: a%b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
