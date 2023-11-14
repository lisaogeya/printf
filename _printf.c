#include "main.h"

/**
 * _printf - Prints output according to a format
 * @format: Character string containing zero or more directives
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
char *string;
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
write(STDOUT_FILENO, &c, 1);
total++;
break;
case 's':
string = va_arg(the_arg_list, char *);
length = 0;
for (; *string != '\0'; ++string)
{
length++;
}
write(STDOUT_FILENO, string, length);
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

