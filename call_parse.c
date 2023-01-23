#include "main.h"

/**
 *call_parse - calls parse func for each format
 *@t: format type
 *Return:pointer to function
 *
 */
int (*call_parse(char t))(va_list)
{
	int i = 0;
	ops_f op[] = {
		{'c', parse_char},
		{'s', parse_str},
		{'d', parse_int},
		{'i', parse_int},
		{'\0', NULL}
	};
	while (op[i].operation)
	{
		if (t == op[i].operation)
		{
			return (op[i].func);
		}
		i++;

	}
	return (NULL);
}
