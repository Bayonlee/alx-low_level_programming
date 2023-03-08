#include "main.h"

/**
 * strlen_ - String length
 *
 * @str: char
 *
 * Return: length of string
 */

int strlen_(char *str)
{
	if (*str)
	{
		str++;

		return (1 + strlen_(str));
	}
	return (0);
}

/**
 * helper_ - Returns Palindrone
 *
 * @str: char
 *
 * @length: int
 *
 * @count: int
 *
 * Return: the integer length
 */

int helper_(char *str, int length, int count)
{
	if (count >= length)
	{
		return (1);
	}
	if (str[length] == str[count])
	{
		return (helper_(str, length - 1, count + 1));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: char
 *
 * Return: the integer length
 */

int is_palindrome(char *s)
{
	int length = strlen_(s);
	int count = 0;

	return (helper_(s, length - 1, count));
}
