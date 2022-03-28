#include "main.h"

/**
 * _memset - fills first n bytes of memory area pointed by s
 * with constant byte b
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return s;
}
