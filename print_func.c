#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
