#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *arr;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
	}

	arr = malloc(sizeof(char) * (j + 1));

	for (i = 0; i <= j; i++)
		arr[i] = str[i];

	if (arr == NULL)
		return (NULL);
	return (arr);
}
