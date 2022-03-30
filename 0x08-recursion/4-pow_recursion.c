#include "main.h"

/**
 * _pow_recursion - return value of x,
 * raised to power of y
 * @x: int
 * @y: int
 *
 * Return: pow, -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
