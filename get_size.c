#include "main.h"

/**
 * get_size - calculates the size to cast the arguement
 * @format: formatted string
 * @i: list of arguement to be printed
 *
 * Return: size of arguements.
 */

int get_size(const char *format, int *i)
{
	int cur_i = *i + 1;
	int size = 0;

	if (format[cur_i] == 'l')
		size = S_LONG;
	else if (format[cur_i] == 'h')
		size = S_SHORT;
	if (size == 0)
		*i = cur_i - 1;
	else
		*i = cur_i;
	return (size);
}
