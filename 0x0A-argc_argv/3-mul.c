#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: arguments in an array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	return (0);
}
