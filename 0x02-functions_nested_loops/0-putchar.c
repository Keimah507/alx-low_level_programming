#include <stdio.h>
#include "main.h"
/*
 * main - output string putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _putchar(char c)
	{
		char c = "_putchar";	
		return (write(1, &c, 1));
	}

	return (0);
}
