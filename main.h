#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct format - funtion to print specifier
 * @specifiers: the operators to be printed.
 * @f: the function
 */

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;

/*prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int get_function(char s, va_list args);

/*conversion specifiers*/

int print_char(va_list args);
int print_string(va_list args);
int print_rev_string(va_list args);
int print_digit(va_list args);
int print_mod(va_list args);

#endif
