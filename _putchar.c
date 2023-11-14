#include "main.h"
/**
*_putchar - writes character to standard output
*@c: Character to be printed
*Return: 1 if successful
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
