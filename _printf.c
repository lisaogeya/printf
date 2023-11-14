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

