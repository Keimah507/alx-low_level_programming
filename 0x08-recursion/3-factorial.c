#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: number to be factored
 *
 * Return: factorial of n,
 * -1 if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
