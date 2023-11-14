#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);
int print_integer(va_list arg_toprint);
int print_decimal(va_list arg_toprint);
#endif 
