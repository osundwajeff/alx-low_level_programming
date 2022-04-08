#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: input
 * @s2: input
 * @n: input
 * Return: return(pointer)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, ab, ab2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n < j)
		j = n;

	j += i;
	arr = malloc(sizeof(char *) * (j + 1));

	if (arr == NULL)
		return (NULL);

	for (ab = 0; ab < i; ab++)
		arr[ab] = s1[ab];
	for (ab2 = 0; ab2 < j; ab2++)
	{
		arr[ab] = s2[ab2];
		ab++;
	}
	ab++;
	arr[ab] = '\0';
	return (arr);
}
