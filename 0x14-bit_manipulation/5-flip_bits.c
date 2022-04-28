#include "main.h"
/**
 * flip_bits - function that returns the number
 * of bits you need to flip to get from one number
 * to another
 * @n: integer
 * @m: integer
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, xor = n ^ m;

	while ((xor) > 0)
	{
		bits += ((xor) & 1);
		((xor) >>= 1);
	}
	return (bits);
}
