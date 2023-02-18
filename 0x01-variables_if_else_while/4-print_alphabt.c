#include <stdio.h>

/**
 * main - start of code
 *
 * Return: 0 successul
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);

}
