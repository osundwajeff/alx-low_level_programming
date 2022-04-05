#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, z = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (i = 0; i <= *s1; i++)
	{
	}

	for (j = 0; j <= *s2; j++)
	{
	}

	array = malloc(sizeof(char) * (i + j + 1));

	if (array == NULL)
		return (NULL);

	while (*s1)
	{
		array[i] = *s1;
		z++;
		s1++;
	}

	while (*s2)
	{
		array[i] = *s2;
		z++;
		s2++;
	}
	return (array);
}
