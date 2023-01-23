#include <unistd.h>
/**
 *_putchar - writes a character to stdout
 *@c: char
 *Return: 1
 *
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
