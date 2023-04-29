#include "main.h"
#include <unistd.h>

/**
 * print_digit - print integers.
 * @types: list of args
 * @buffer: a buffer array to handle print
 * @flags: calculates active flags
 * @width: get width
 * @precision: specifies precise data type
 * @size: size specifier
 * Return: number of characters
 */

int print_digit(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(types, long int);
	unsigned long int digits;

	n = convert_size_number(n, size);

	if (n == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';
	digits = (unsigned long int)n;

	if (n < 0)
	{
		digits = (unsigned long int) ((-1) * n);
		is_negative = 1;
	}

	while (digits > 0)
	{
		buffer[i--] = (digits % 10) + '0';
		digits /= 10;
	}

	return (write_number(is_negative, i, buffer, flags, width, precision, size));
}


