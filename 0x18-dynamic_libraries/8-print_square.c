#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: Where size is size of square
 *
 * Return: 0
 */

void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('0');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
