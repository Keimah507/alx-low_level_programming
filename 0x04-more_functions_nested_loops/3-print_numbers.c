#include "main.h"

/**
 * print_numbers - prints numbers for 0 to 9,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for(i = 0; i <= 9; i++)
	{
		_putchar('0' + 1);
	}
	_putchar('\n');
}
