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
	int i;

	i = n * (n - 1);
	if (i >= 0)
	{
		return (i);
	}
	else if (n == 0)
	{
		i = 1;
		return (i);
	}
	else
	{
		return (-1);
	}
}
