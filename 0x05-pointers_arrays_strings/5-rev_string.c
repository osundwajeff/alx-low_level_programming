#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int fc = 0;
	int i;

	while (s[fc] != '\0')
		fc++;

	for (i = 0; i < fc; i++)
	{
		fc--;
		rev = s[i];
		s[i] = s[fc];
		s[fc] = rev;
	}
}
