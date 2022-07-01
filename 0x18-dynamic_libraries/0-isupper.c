#include "main.h"

/**
 * _isupper - check if character is upper or lower case
 *
 * @c: int
 *
 * Return: 1 if c is uppercase
 * Return: 0 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
