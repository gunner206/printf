#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);

typedef struct specifier
{
	char *specifier;
	char (*f)(va_list args, char *);
}
#endif
