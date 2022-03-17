#include "main.h"

/**
 * print_line - draws straight line in terminal
 *
 * @n: number of times charachter _ is printed
 *
 * Return: Always 0 (Success)
 */

void print_line(int n);
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
