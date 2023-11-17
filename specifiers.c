#include "main.h"


int specifiers(const char *format, va_list the_arg_list)
{
int total;
switch (*++format)
{
case 'c':
char c = va_arg(the_arg_list, int);
write(STDOUT_FILENO, &c, 1);
total++;
break;
case 's':
char *str = print_str(va_arg(the_arg_list, char *));
write(STDOUT_FILENO, &str, 1);
break;
case '%':
char p = _putchar(va_arg('%'));
write(STDOUT_FILENO, &p, 1);
break;
default:
char p = '%';
_putchar(p);
write(STDOUT_FILENO, format, 1);
break;
}
return (total);
}
