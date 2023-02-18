#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - beginnning of the code
 * Return: 0 program is successful
 */
int main(void)
{
	int n;
	int last_val;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_val = n % 10;
	if (last_val > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last_val);
	else if (last_val == 0)
	       printf("Last digit of %i is %i and is greater than 0\n", n, last_val);
	else if (last_val < 6)
	       printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_val);
	return (0);
}
