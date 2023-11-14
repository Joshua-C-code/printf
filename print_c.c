#include "main.h"

/**
 * printf_char - Prints a character.
 * @val: A va_list containing the character to be printed.
 *
 * Return: Always 1.
 */
int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}

