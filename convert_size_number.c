#include "main.h"

/**
 * convert_size_number - cast a number to the specified size
 * @digit: number to be casted
 * @size: number indicates type
 *
 * Return: casted value of digit
 */

long int convert_size_number(long int digit, int size)
{
	if (size == S_LONG)
		return (digit);
	else if (size == S_SHORT)
		return ((short)digit);

	return ((int)digit);
}
