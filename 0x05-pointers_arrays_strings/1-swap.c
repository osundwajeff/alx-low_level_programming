#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: input 1
 * @b: input 2
 * Return: integer
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
