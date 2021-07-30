#ifndef HOLBERTON_PRINTF_H
#define HOLBERTON_PRINTF_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct format - our own printf function
 * @str: char pointer
 * @func: function associated
 */
typedef struct format
{
	char *str;
	int (*func)(va_list);
} form_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_decimal(va_list i);
int print_int(va_list d);

#endif
