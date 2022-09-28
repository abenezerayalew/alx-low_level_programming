#include "main.h"

/**
 * _puts_recursion - a fuction that prints a new line
 * *
 * @s: the string
 *
 * return: Always 0 (succes)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
