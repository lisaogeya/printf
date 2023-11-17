#include "main.h"
/**
* _printf - Prints output according to a format
* @format: Character string containing zero or more directives
* Return: The number of characters printed
*/
int _printf(const char *format, ...)
{
char *str;
int total = 0;
char *c;
int length;
va_list the_arg_list;
va_start(the_arg_list, format);
if (format == NULL)
{
return (-1);
}
while (*format != '\0')
{
if (*format != '%')
{
write(STDOUT_FILENO, format, 1);
total++;
}
else
{
switch (*format++)
{
case 'c':
*c = va_arg(the_arg_list, int);
write(1, &c, 1);
total++;
break;
case 's':
str = print_str(va_arg(the_arg_list, char *));
write(STDOUT_FILENO, str, length);
total += length;
break;
default:
putchar('%');
write(STDOUT_FILENO, format, 1);
total += 2;
break;
}
}
format++;
}
va_end(the_arg_list);
return (total);
}
