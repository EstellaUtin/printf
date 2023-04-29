#include "main.h"
#include <unistd.h>

/**
 * print_percent - print %
 * @types: list of arguements
 * @buffer: buffer array to handle print
 * @flags: calculate active flags
 * @width: width
 * @precision: precision specifiers
 * @size: size
 * Return: count of chars.
 */

int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
