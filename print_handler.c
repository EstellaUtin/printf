#include "main.h"

/**
 * print_handler- prints an argument based on the its type
 * @fmt: format string
 * @list: list to be printed
 * @ind: ind
 * @buffer: arry to print
 * @flags: calculates specific flags
 * @width: get width.
 * @precision: specifier
 * @size: size specifier
 * Return: 1 or 2
 */

int print_handler(const char *fmt, int *ind, va_list list, char buffer[],
			int flags, int width, int precision, int size)
{
	int i, unknown_len = 0, count_chars = -1;
	fmt_t fmt_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_mod},
		{'i', print_digit}, {'d', print_digit}, {'\0', NULL}
	};
	for (i = 0; fmt_types[i].fmt != '\0'; i++)
		if (fmt[*ind] == fmt_types[i].fmt)
			return (fmt_types[i].fn(list, buffer, flags, width, precision, size));
	if (fmt_types[i].fmt == '\0')
	{
		if (fmt[*ind] == '\0')
			return (-1);
		unknown_len += write(1, "%%", 1);
		if (fmt[*ind - 1] == ' ')
			unknown_len += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (fmt[*ind] != ' ' && fmt[*ind] != '%')
				--(*ind);
			if (fmt[*ind] == ' ')
				--(*ind);
			return (1);
		}
		unknown_len += write(1, &fmt[*ind], 1);
		return (unknown_len);
	}
	return (count_chars);
}
