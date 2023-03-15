#include <stdio.h>
/**
 * main - main func
 * @argc: argument count
 * @argv: argument in arrays
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
