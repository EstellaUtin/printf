#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_string - print a string
 * @args: user arguements
 * Return: number of characters
 */
int print_string(va_list args)
{
	int i;
	int count_fun = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";
	if (str[0] == '\0')
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
		count_fun += _putchar(str[i]);

	return (count_fun);
}
