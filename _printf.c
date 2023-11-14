#include "main.h"

/**
 * _printf - Custom printf function for %d and %i format specifiers.
 * @format: Format string with optional placeholders.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
    convert p[] = {
        {"%i", print_integer}, {"%d", print_integer}, {"%r", print_revs},
    };

    va_list args;
    int k = 0, length = 0;

    va_start(args, format);

    while (format[k] != '\0')
    {
        if (format[k] == '%' && (format[k + 1] == 'd' || format[k + 1] == 'i'))
        {
            int j = 0;
            while (j < sizeof(p) / sizeof(p[0]))
            {
                if (strcmp(format + k, p[j].ph) == 0)
                {
                    length += p[j].function(args);
                    break;
                }
                j++;
            }
            k += 2; /* Move past the format specifier */
        }
        else
        {
            _putchar(format[k]);
            length++;
            k++;
        }
    }

    va_end(args);
    return (length);
}
