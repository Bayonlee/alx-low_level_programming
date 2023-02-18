#include <stdio.h>

/**
 * main - start of main code.this is the main body
 *
 * return: 0 successfully compiled
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
