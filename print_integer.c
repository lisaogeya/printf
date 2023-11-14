#include "main.h"
/**
*print_integer - it prints an integer
*@arg_toprint: its an argument to print
*Return: the number of digits printed
*/
int print_integer(va_list arg_toprint)
{
/*To extract the int from the variable arg*/
int number = va_arg(arg_toprint, int);
/*The variable for digit processing*/
int temp, lastDigit = number % 10, currentDigit, exp = 1;
/*The variable to track the no of digits which are printed*/
int input = 1;
/*putting the original number for more processing*/
number = number / 10;
/*To handle where the last digit is negative*/
if (lastDigit < 0)
{
_putchar('-');
temp = -temp;
number = -number;
lastDigit = -lastDigit;
input++;
}
{
/*Check the magnitude off the number*/
while (temp / 10 != 0)
{
exp = exp * 10;
temp = temp / 10;
}
/*Reset temp to new number*/
temp = number;
/*Print each digit using the magnitude*/
while (exp > 0)
{
currentDigit = temp / exp;
_putchar(currentDigit + '0');
temp = temp - (currentDigit *exp);
exp = exp / 10;
input++;
}
}
_putchar (lastDigit + '0');
return (input);
}
/**
*print_decimal - it prints a decimal
*@arg_toprint: its an argument to print
*Return: the number of digits printed
*/
int print_decimal(va_list arg_toprint)
{
/*To extract the int from the variable arg*/
int number = va_arg(arg_toprint, int);
/*The variable for digit processing*/
int temp, lastDigit = number % 10, currentDigit, exp = 1;
/*The variable to track the no of digits which are printed*/
int input = 1;
/*putting the original number for more processings*/
number = number / 10;
/*To handle where the last digit is negative*/
if (lastDigit < 0)
{
_putchar('-');
temp = -temp;
number = -number;
lastDigit = -lastDigit;
input++;
}
{
/*Check the magnitude off the number*/
while (temp / 10 != 0)
{
exp = exp * 10;
temp = temp / 10;
}
/*Reset temp to new number*/
temp = number;
/*Print each digit using the magnitude*/
while (exp > 0)
{
currentDigit = temp / exp;
_putchar(currentDigit + '0');
temp = temp - (currentDigit *exp);
exp = exp / 10;
input++;
}
}
_putchar (lastDigit + '0');
return (input);
}
