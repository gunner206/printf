#include "main.h"

/**
 * print_char - prints a character
 * @args: argument lisr
 *
 * Return: char printed
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
/**
 * print_percent - function that print the character
 * @args: character to pass
 * Return: On success 1.
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
/**
 * print_string - function that print a string
 * @args: pointer to first argument
 * Return: number of characters of the string
 */
int print_string(va_list args)
{
	const char *p;
	int i;

	p = va_arg(args, const char*);
	if (p == NULL)
		p = "(null)";
	for (i = 0 ; p[i] != '\0' ; i++)
		_putchar(p[i]);
	return (i);
}
/**
 * print_int - function that print a number
 * @args: pointer to first argument
 * Return: n
 */
int print_int(va_list args)
{
	int n;

	n = print_number(args);
	return (n);
}
/**
 * print_number - function that return the len of a number
 * @args: pointer to first argument
 * Return: len
 */
int print_number(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num = (n < 0) ? -n : n;
	int len = 0;
	int check = 1;

	if (n < 0)
		len += _putchar('-');

	while (num / check > 9)
		check *= 10;

	while (check != 0)
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}

	return (len);
}

