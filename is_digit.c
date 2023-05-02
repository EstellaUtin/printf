#include "main.h"

/**
 * is_digit - checks if character is a digit
 * @c: character to be verified
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
