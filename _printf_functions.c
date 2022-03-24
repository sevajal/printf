#include "main.h"

/**
 * _printf_char - print a character.
 * @args: args
 * Return: nothing.
 */
int _printf_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * _printf_string - prints a string.
 * @args: args.
 * Return: Nothing.
 */
int _printf_string(va_list args)
{
	char *str = va_arg(args, char*);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		if (i >= 944)
			break;
	}
	return (i);
}

/**
 * _printf_int - prints an integer.
 * @args: args
 * Return: nothing
 */
int _printf_int(va_list args)
{
	unsigned int i, abs, tmp, count = 0;
	int n = va_arg(args, int);

	if (n < 0)
	{
		count += _putchar('-');
		i = n * -1;
	}
	else
		i = n;

	abs = i;
	tmp = 1;

	while (abs > 9)
	{
		abs /= 10;
		tmp *= 10;
	}
	for (; tmp >= 1; tmp /= 10)
		count += _putchar(((i / tmp) % 10) + '0');
	return (count);
}

/**
 * _printf_unsigned - prints an unsigned integer.
 * @args: args
 * Return: nothing
 */
int _printf_unsigned(va_list args)
{
	unsigned int i, abs, tmp, count = 0;
	unsigned int n = va_arg(args, unsigned int);

	i = n;
	abs = i;
	tmp = 1;

	while (abs > 9)
	{
		abs /= 10;
		tmp *= 10;
	}
	for (; tmp >= 1; tmp /= 10)
		count += _putchar(((i / tmp) % 10) + '0');
	return (count);
}

/**
 * _printf_octal - prints an octal number.
 * @args: args
 * Return: nothing
 */
int _printf_octal(va_list args)
{
	unsigned int decimalnum = va_arg(args, unsigned int);
	unsigned int octalNumber = 0, i = 1, j, abs, tmp;

	while (decimalnum != 0)
	{
		octalNumber += (decimalnum % 8) * i;
		decimalnum /= 8;
		i *= 10;
	}

	j = octalNumber;
	abs = j;
	tmp = 1;

	while (abs > 9)
	{
		abs /= 10;
		tmp *= 10;
	}
	for (; tmp >= 1; tmp /= 10)
		_putchar(((j / tmp) % 10) + '0');
	return (1);
}
