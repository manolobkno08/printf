#ifndef HOLBERTON_PRINTF_H
#define HOLBERTON_PRINTF_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct printf - our own printf function
 * @print: char pointer
 * @f: function associated
 */
typedef struct printf
{
	char *carac;
	int (*func)(va_list);
} form_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_decimal(va_list i);
int print_int(va_list d);
int print_unsigned_int(va_list u);
int print_unsigned_octal(va_list o);
int print_unsigned_hexa(va_list x);
#endif

