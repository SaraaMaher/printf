#ifndef Maih
#define Main
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct ops - struct ops
 * @operation: data type
 * @func: function
 */
typedef struct ops
{
char operation;
int (*func)(va_list);
}
int _printf(const char *format, ...);
int _putchar(char c);
int (*call_parse(char t))(va_list);
#endif
