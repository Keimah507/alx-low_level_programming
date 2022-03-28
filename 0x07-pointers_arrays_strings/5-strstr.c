#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds first occurrence
 * of the substring needle in the string haystack
 * @haystack: pointer to char
 * @needle pointer to char
 * Return: pointer to beginning of located substring,
 * NULL otherwise.
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
