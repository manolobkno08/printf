#include "holberton.h"
/**
 * _printf - own function
 * @format: list of characters
 * Return: i
 */
int _printf(const char *format, ...)
{
	form_t function[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL}
	};

	int i, j, x = 0;
	va_list list;

	va_start(list, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
				continue;
			}

			for (j = 0; function[j].str != NULL; j++)
			{
				if (format[i + 1] == function[j].str[0])
				{
					x = x + function[j].func(list);
					i = i + 2;
				}
			}
		}
		_putchar(format[i]);
	}

	i = x + 1;

	va_end(list);

	return (i);
}
