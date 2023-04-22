#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct print_function
{
	char *format;
	void (*function)(va_list args);
} print_function;


#endif
