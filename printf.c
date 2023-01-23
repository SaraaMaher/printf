#include "main.h"
/**
 * _printf - printf
 * @format: string
 * Return: int
 */
int _printf(const char *format, ...)
{
int i, count;
int (*f)(va_list);
va_list list;
if (format == NULL)
return (-1);
i = count = 0;
va_start(list, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
return (-1);
f = call_parse(format[i + 1]);
count += f(list);
i++;
}
else
{
_putchar(format[i]);
count++;
}
i++;
}
va_end(list);
return (count);
}
