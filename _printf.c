#include "main.h"

/**
 * _printf - our printf function
 * @format: given format
 *
 * Return: number of char printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	specifier_t func_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
                {"i", print_int},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	printed_chars = convert(format, func_list, args);
	va_end(args);
	return (printed_chars);
}
