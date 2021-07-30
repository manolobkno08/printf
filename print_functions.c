#include "holberton.h"

/**
 * print_char - print a char
 * @list: va_list
 * Return: 1
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
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

/**
* print_decimal - print decimal
* @list: va_list
* Return: 1
*/

int print_decimal(va_list list)
{
	int i = va_arg(list, int);

	_putchar(i);
	return (1);
}

/**
* print_int - print a int
* @list: va_list
* Return: 1
*/

int print_int(va_list list)
{
	int d = va_arg(list, int);

	_putchar(d);
	return (1);
}
