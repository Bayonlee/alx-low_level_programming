#include "main.h"

/**
* _atoi - print integers function
* @s: integer to be printed
* Return:  the integer e
*/
int _atoi(char *s)
{
	int a, b, c, j;
	unsigned int e;

	a = 0;
	c = 1;
	e = 0;
	j = 0;

	while (s[a] != '\0')
	{
		b = s[a];
	if (b == 45)
	{
		c = c * (-1);
	}
	if (b >= 48 && b <= 57)
	{
		b = s[a] - 48;
		if (e == 0)
		{
			e = b;
		}
		else
		{
			e = (e * 10) + b;
			++j;
		}
	}
	else if (j > 0)
	{
		break;
	}
	++a;
	}
	e = e * c;
	return (e);
}
