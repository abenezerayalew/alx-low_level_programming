#include "variadic_functions.h"

/**
 * print_numbers -  a function that prints numbers, followed by a new line
 *
 * @n: variable start
 * @separator: is the string to be printed between numbers
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, print;

	va_list(arg);
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
	print = va_arg(arg, int);
	printf("%d", print);
	if (separator && i != n - 1)
	printf("%s", separator);
	}
	printf("\n");
}
