#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates character in a string
 * @s : string
 * @c : character
 *
 * Return: first ocuurence of c in string s otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		else if (a == 0)
		{
			return (NULL);
		}
	}
}
