#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @index: index
 * @n: integer
 * Return: 1 if it worked or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);

	bits = ~(1 << index);

	*n = *n & bits;

	return (1);
}
