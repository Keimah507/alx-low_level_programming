#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer
 *
 * Return:  n, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer
 * @i: integer
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
