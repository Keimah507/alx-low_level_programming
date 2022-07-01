#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number
 *
 * Return: Diagonal line on terminal
 */

void print_diagonal(int n)
{
	int file;
	int columns;

	if (n > 0)
	{
		for (file = 0; file < n; file++)
		{
			for ( columns = 0; columns <= file; columns++)
			{
				if (file == columns)
				{
					_putchar('\\');
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
