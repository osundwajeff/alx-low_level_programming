#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: struct name
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age <= 0)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
}
