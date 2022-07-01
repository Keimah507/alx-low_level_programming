#include "main.h"

/**
 * _printf - produces output according to format
 * @format: character string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cs%";

	va_start(list, formula);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
				{
				if (format[i] == t_arg[j] && c)
				{
					printf(",");
					break;
				}
				j++;
				}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), c = 1;
				break;
			case "s":
				str = va_arg(list, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
			case "%":
				printf("%%");
				break;
		}
		va_end(list);
	}
}
