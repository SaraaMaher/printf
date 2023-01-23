#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

#include <unistd.h>

#include <stdlib.h>

#include <stdio.h>

#include <limits.h>
/**
 * struct type - struct type
 * @t: t - data type
 * @f: function - function
 */
typedef struct type
{
char t;
int (*f)(va_list, int);
} type_t;
int _printf(const char *format, ...);
int parse_str(va_list arg, int count);
int parse_char(va_list arg, int count);
int parse_perc(va_list arg, int count);
int parse_int(va_list list, int count);
int parse_decimal(va_list list, int count);
#endif
