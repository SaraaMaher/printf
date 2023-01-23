#include "main.h"
/**
 * _printf - counts number of printed characters
 * @format: string
 * Return: int
 */
int _printf(const char *format, ...)
{
int i = 0, j, count = 0;
va_list arg;
char c[] = {{'c', parse_char}, {'s', parse_str}, {'%', parse_perc}};
if (!format)
return (-1);
va_start(arg, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
for (j = 0; c[j].t != '\0'; j++)
{
if (format[i] == '\0')
break;
if (format[i] == c[j].t)
{
count = c[j].f(arg, count);
break;
}
}
}
i++;
}
va_end(arg);
return (count);
}
