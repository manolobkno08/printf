#include "holberton.h"

/**
 * print_char - print a char
 * @list: va_list
 * Return: 1
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar (c);
	return (1);
}

/**
 * print_string - print a string
 * @list: va_list
 * Return: i
 */
int print_string(va_list list)
{
	char *s = va_arg(list, char *);
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar (s[i]);
	}
	return (i);
}
