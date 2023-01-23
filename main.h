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
int (*f)(char *, va_list, int);
} type_t;
int _printf(const char *format, ...);
int parse_str(char *buff, va_list arg, int count);
int parse_char(char *buff, va_list arg, int count);
int parse_perc(char *buff, va_list arg, int count);
int parse_int(char *buff, va_list list, int count);

#endif
