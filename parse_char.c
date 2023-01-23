#include "main.h"
/**
 * parse_char - prints a character to stdout
 * @list: char
 * Return: 1
 */
int parse_char(va_list list)
{
char c;
c = va_arg(list, char);
count += _putchar(c);
return (count);
}
