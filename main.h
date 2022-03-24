#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct select - struct for functions
 * @type: type of fuction
 * @f: function
 */
typedef struct select
{
	char *type;
	int (*f)(va_list);
} selection;

int _putchar(char c);
int _printf_char(va_list args);
int _printf_int(va_list args);
int _printf_string(va_list args);
int _printf_unsigned(va_list args);
int _printf_octal(va_list args);
int _printf_hexa(va_list args);
int _printf(const char *format, ...);

#endif
