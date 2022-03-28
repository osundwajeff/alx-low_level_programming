#include "main.h"

/**
 * _memset() - function fills @n bytes of the memory area pointed to by @s
 *  with the constant byte @b
 * @s: pointer to memory area
 * @b: constant byte to fill area
 * @n: number of bytes to be filled
 *
 * Return: pointer to memory area filled by @s
 */
char *_memset(void *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
