#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *token;
	
	va_start(args, format);

	specifier_t specifiers[] = {
	{"c", print_char},
	{"s", print_string},
	{'%', print_percent},
	{NULL, NULL}
	};

	while (format != "\0" && format[i] != '\0')
	{
		while (specifiers[j].specifer != '\0')
		{
			if (format[i] == '%' && format[i + 1] != '\0')
			{
				if (format[i + 1] = specifiers[j].specifier[0])
				{
					specifiers[j].f(args);
				}
				j++;
			}
			i++;
		}
		j++;
	}
	i++;
	
	va_end(args);




}
