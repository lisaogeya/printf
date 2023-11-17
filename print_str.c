#include "main.h"
#include <string.h>
/**
 * print_str-prints string
 * @str:string parameter
 */
char print_str(const char *str)
{
int length = 0;
for (; *str != '\0'; ++str)
{
length++;
_putchar(*str);
}
_putchar('\n');
}
