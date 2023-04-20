#include "3-cale.h"
#include <stdlib.h>
#include <string.h>

/**
 * get - returns pointer of function.
 * @s: string.
 *
 * Return: pointer.
 */
int (*get_op_func(char *s))(int, int)
{	
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
    };
    int i = 0;

