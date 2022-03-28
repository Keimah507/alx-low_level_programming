#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @src: bytes copied from
 * @dest: bytes copied to
 * @n: number of bytes to copy
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
