#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string passed between the strings
 * @n: number of strings passed to a function
 * Return: (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(v, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(v);
}
