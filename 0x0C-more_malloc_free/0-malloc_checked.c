#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - check memory allocation
 * @b: input
 * Return: return (pointer to allocated memory)
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
