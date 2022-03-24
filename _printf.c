#include "main.h"

/**
 * _printf - print according with format.
 * @format: format of the arguments.
 * Return: 0 if success.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0, j = 0;

	selection functions[] = {{"c", _printf_char},
		{"i", _printf_int}, {"s", _printf_string},
		{"d", _printf_int}, {"u", _printf_unsigned},
		{"o", _printf_octal}, {"X", _printf_hexa},
	};

	if (format != NULL)
	{
		va_start(args, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar('%');
					i += 2;
				}
				if (format[i + 1] != '%')
				{
					for (j = 0; functions[j].type; j++)
					{
					if (*(functions[j].type) == format[i + 1])
					{
						count += functions[j].f(args);
						i += 2;
					}
					}
				}
			}
			count += _putchar(format[i]);
		}
		va_end(args);
	}
	return (count);
}
