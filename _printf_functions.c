#include "main.h"

/**
 * _putchar - writes the character c to stdout.
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf_char - print a character.
 * @c: The character to print
 * Return: nothing.
 */
void _printf_char(char c)
{
	_putchar(c);
}

/**
 * _printf_string - prints a string.
 * @str: the string.
 * Return: Nothing.
 */
void _printf_string(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}

/**
 * _printf_int - prints an integer.
 * @n: The integer
 * Return: nothing
 */
void _printf_int(int n)
{
	unsigned int i, abs, tmp;

	if (n < 0)
	{
		_putchar('-');
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
		_putchar(((i / tmp) % 10) + '0');
}
