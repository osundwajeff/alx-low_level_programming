#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all its parameters
 * @n: variadic inputs
 * Return: (sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(v, const unsigned int);
	}

	va_end(v);

	return (sum);
}
