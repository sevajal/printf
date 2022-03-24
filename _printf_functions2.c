#include "main.h"

/**
 * _printf_hexa - prints a hexadecimal number.
 * @args: args
 * Return: count of characters.
 */
int _printf_hexa(va_list args)
{
	unsigned int decimalnum = va_arg(args, unsigned int);
	int remainder, count, i = 0;
	char hexadecimalnum[50];

	while (decimalnum != 0)
	{
		remainder = decimalnum % 16;
		if (remainder < 10)
			remainder = 48 + remainder;
		else
			remainder = 55 + remainder;
		hexadecimalnum[i] = remainder;
		i++;
		decimalnum = decimalnum / 16;
	}
	for (i = i - 1; i >= 0; i--)
		count += _putchar(hexadecimalnum[i]);
	return (count);
}
