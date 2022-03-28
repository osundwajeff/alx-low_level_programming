#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a charachter in string
 * @c: input
 * @s: input
 * Return: (success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for(i = 0; s[i] >= '\0'; i++)
	{
		if(s[i] == c)
			return (s + 1);
	}

	return (NULL);
}
