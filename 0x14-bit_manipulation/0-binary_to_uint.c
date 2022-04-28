#include <math.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 *
 * Return:converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, base = 1;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += ((b[i] - '0') * base);
		base *= 2;
	}
	return (num);
}
