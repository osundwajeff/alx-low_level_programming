#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: input
 * Return: returns (success)
 */
int _strlen_recursion(char *s)
{
	if (*s != '\n')
		_strlen_recursion(s +1);
	else
		return;
	_putchar(*s);
}
