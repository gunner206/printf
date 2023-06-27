#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct specifier - struct for specifiers
 * @specifier: given specifier
 * @f: function associated
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list args);
}
specifier_t;

/* print_function.c module */
int _putchar(char c);
int print_char(va_list args);
int print_percent(va_list args);
int print_string(va_list args);
int print_int(va_list args);
/* _printf.c module */
int _printf(const char *format, ...);

/* convert.c module */
int convert(const char *format, specifier_t func_list[], va_list args);

#endif
