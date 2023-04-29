#include "main.h"

/**
 * print_char - function that prints a single character.
 * @types: lists arguments
 * @buffer: Buffer array to handle print
 * @precision:Specifies data type
 * @flags: counts active flags
 * @size: size specifier
 * @width: width of the arguments
 * Return: 1 which is number of character printed.
 */

int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (write_char(c, buffer, flags, precision, width, size));
}
