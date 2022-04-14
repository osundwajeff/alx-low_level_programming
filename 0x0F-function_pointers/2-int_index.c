#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - returns index of the first element
 * @size: number of elements in array
 * @array: array
 * @cmp: pointer to function to be used to compare values
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for  (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
