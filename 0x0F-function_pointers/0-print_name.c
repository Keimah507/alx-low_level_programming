#include "main.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to function
 *
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || f)
	return;
	f(name);
}