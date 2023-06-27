#include "main.h"

int convert(const char *format, specifier_t func_list[], va_list args)
{
	int i;
	int j;
	int printed_chars;
	int func;

	for (i = 0 ; format[i] != '\0' ; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0 ; func_list[j].specifier != NULL ; j++)
			{
				if (format[i + 1] == func_list[j].specifier[0])
				{
					func = func_list[j].f(args);
					if (func == -1)
						return (-1);
					printed_chars += func;
					break;
				}
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}