#include "main.h"

/**
 * _printf - print according with format.
 * @format: format of the arguments.
 * Return: 0 if success.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0, j = 0, b = 0;

	selection functions[] = {{"c", _printf_char},
		{"i", _printf_int}, {"s", _printf_string},
		{"d", _printf_int}, {"u", _printf_unsigned},
		{"o", _printf_octal}, {"X", _printf_hexa},
	};

	if (format)
	{
		va_start(args, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] != '%')
				count += _putchar(format[i]);
			if (format[i] == '%')
			{
				i = i + 1;
				if (format[i] == '\0')
					return (-1);
				for (j = 0; functions[j].type; j++)
				{
					if (*(functions[j].type) == format[i])
					{
						count += functions[j].f(args);
						b = 1;
					}
				}
				if (b != 1)
				{
					if (format[i] == '%')
						count += _putchar(format[i]);
					else
					{
					count += _putchar(format[i - 1]);
					count += _putchar(format[i]);
					}
				}
			}
		}
		va_end(args);
		return (count);
	}
	else
		return (-1);
}
