#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: pointer to char name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
