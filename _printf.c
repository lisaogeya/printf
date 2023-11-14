#include "main.h"
#include <stdarg.h>

/**
 * _printf - Prints output according to a format
 * @format: Character string containing zero or more directives
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
int total = 0;
va_list the_arg_list;
va_start(the_arg_list, format);
while (*format)
{
if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's' || *(format + 1) == '%' || *(format + 1) == 'd' || *(format + 1) == 'i'))
{
format += 2; /*move to the next character*/
}
else
{
total += _putchar(*format);
format++;
}
}
va_end(the_arg_list);
return (total);
}
