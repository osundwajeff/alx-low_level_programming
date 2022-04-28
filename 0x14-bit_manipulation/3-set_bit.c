#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index
 * @n: integer
 * Return: 1i f worked or -1 if an erro occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);

	bits =  1 << index;
	*n = *n | bits;

	return (1);
}
