#include "main.h"

/**
 * _printf - print according with format.
 * @format: format of the arguments.
 * Return: 0 if success.
 */

int _printf(char *format, ...)
{
	va_list args;
	char *p;

	va_start(args, format);

	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			continue;
		}

		switch (*++p)
		{
			case 'd':
				_printf_int(va_arg(args, int));
				break;
			case 's':
				_printf_string(va_arg(args, char*));
				break;
			case 'c':
				_printf_char(va_arg(args, int));
				break;
			default:
				_printf_char(*p);
			break;
		}
	}
	va_end(args);
	return (0);
}
