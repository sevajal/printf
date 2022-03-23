#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

/**
 * struct select - struct for functions
 * @type: type of fuction
 * @f: function
 */
typedef struct select
{
	char *type;
	void (*f)(va_list);
} selection;

int _putchar(char c);
void _printf_char(va_list types);
void _printf_int(va_list types);
void _printf_string(va_list types);
int _printf(const char *format, ...);

#endif
