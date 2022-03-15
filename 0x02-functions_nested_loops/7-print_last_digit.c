#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */

int print_last_digit(int a)
{
	int bc;

	if (a < 0)
		bc = -1 * (a % 10);
	else
		bc = a % 10;

	_putchar(bc + '0');
		return (bc);
}
