#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * @n:arg
 *
 * Return: sum (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list(arg);
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
	sum = sum + va_arg(arg, int);
	}
	return (sum);
	va_end(arg);
}
