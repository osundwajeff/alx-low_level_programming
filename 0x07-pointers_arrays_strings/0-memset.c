#include "main.h"

/**
 * -memset() - function fills @n bytes of the memory area pointed to by @s
 *  with the constant byte @b
 * @s: pointer to memory area
 * @b: constant byte to fill area
 * @c: number of bytes to be filled
 *
 * Return: pointer to memory area filled by @s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value =c;

	for(index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
