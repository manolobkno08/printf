#include "holberton.h"
/**
 * _printf - own function
 * @format: list of characters
 * Return: 0
 */
int _printf(const char *format, ...)
{
	form_t function[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
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

			for (j = 0; format[j]; j++)
			{
				if (format[i + 1] == function[j].carac[0])
				{
					x = x + function[j].func(list);
					i++;
					continue;
				}
			}
		}
		_putchar(format[i]);
	}

	i = x + 1;

	va_end(list);

	return (i);
}
