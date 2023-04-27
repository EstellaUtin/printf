#include "main.h"
#include <unistd.h>

/**
 * print_digit - print integers.
 *
 * @args: arguments.
 * Return: number of characters
 */

int print_digit(va_list args)
{
	int decimal = 1;
	int count_fun = 0;
	long int digit = va_arg(args, int);
	long int digits;

	if (digit < 0)
	{
		count_fun += _putchar('-');
		digit *= -1;
	}

	if (digit < 10)
		return (count_fun += _putchar(digit + '0'));
	
	digits = digit;

	while (digits > 9)
	{
		decimal *= 10;
		digits /= 10;
	}

	while (decimal >= 1)
	{
		count_fun += _putchar(((digit / decimal) % 10) + '0');
		decimal /= 10;
	}

	return (count_fun);
}
