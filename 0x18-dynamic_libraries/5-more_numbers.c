#include "main.h"

/**
 * morre_numbers - prints 10 times the numbers,
 * from 10 to 14,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i;
	int n;
	 for (i = 0; 1 <= 9; i++)
	 {
		 for (n = 0; n <= 14; n++)
		 {
			 if (n > 9)
			 {
				 _putchar('1');
			 }
			 _putchar((n % 10) + '0');
		 }
		 _putchar('\n');
	 }
}
