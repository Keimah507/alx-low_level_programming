#include "main.h"

/**
 * print_triangle - prints a triangle, followrd by a new line
 *
 * @size: size of triangle
 *
 * Return: 0;
 */

void print_triangle(int size)
{
	int row, column, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = size - row; column > 1; column--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= row; k++)
			{
				_putchar('#')
			}
			_putchar('\n');
		}
	}
	return (0);
}
