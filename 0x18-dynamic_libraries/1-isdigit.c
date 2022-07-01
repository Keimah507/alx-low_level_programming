#include "main.h"

/**
 * _isdigit - checks if data type is a digit
 *
 * @c: Integer being checked
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if ( c >= '0' && c <= '9')
	{
		return (1);
	}
	else 
		return (0);
}

