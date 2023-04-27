#include "main.h"
#include <unistd.h>

/**
 * print_char - prints a single character.
 * @args: list of args
 * Return: 1 which is number of charcter printed.
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
