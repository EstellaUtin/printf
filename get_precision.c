#include "main.h"

/**
 * get_precision - specifies the character type for printing
 * @format: formatted string to print args.
 * @i: list of args to be printed
 * @list: list of args
 *
 * Return: Precision
 */

int get_precision(const char *format, int *i, va_list list)
{
	int cur_i = *i + 1;
	int precision = -1;

	if (format[cur_i] != '.')
		return (precision);

	precision = 0;

	for (cur_i += 1; format[cur_i] != '\0'; cur_i++)
	{
		if (is_digit(format[cur_i]))
		{
			precision *= 10;
			precision += format[cur_i] - '0';
		}
		else if (format[cur_i] == '*')
		{
			cur_i++;
			precision = va_arg(list, int);
		}
		else
			break;
	}
	*i = cur_i - 1;

	return (precision);
}
