#include "main.h"
/**
 * _pow_recursion - function to get x raised to y
 * @x: input
 * @y: input
 * Return: return power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
