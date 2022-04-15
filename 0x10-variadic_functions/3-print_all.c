#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list v;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(v, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(v, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(v, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(v, double), sep);
			break;
		case 's':
			str = va_arg(v, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(v);
}
