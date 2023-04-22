#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: arguments.
 *
 * Return: VOID.
 */
void print_all(const char *const format, ...)
{
    va_list args;
    int i = 0, j = 0;
    char *str;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                break;
            default:
                j++;
                break;
        }
        i++;
        if (format[i] && !j)
            printf(", ");
    }
    printf("\n");

    va_end(args);
}

