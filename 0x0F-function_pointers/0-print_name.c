#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: input name.
 * @f: pointer to a function.
 *
 * Return: VOID.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
