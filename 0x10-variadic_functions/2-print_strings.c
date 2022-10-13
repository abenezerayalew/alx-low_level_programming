#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nill)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
