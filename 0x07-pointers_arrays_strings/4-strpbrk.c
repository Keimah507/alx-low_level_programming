#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locate first occurrence of string s
 * @s: string to be checked
 * @accept: string with the bytes
 *
 * Return: first occurrence of string s otherwise NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{

		for (a = 0; accept[a]; i++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
