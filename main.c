#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
    	printf("Let's try to printf a simple sentence.\n");
	  _printf("Percent:[%%]\n");
	  printf("Percent:[%%]\n");
	  _printf("Character:[%c]\n", 'l');
    	printf("Character:[%c]\n", 'l');
	 _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    return (0);
}
