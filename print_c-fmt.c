#include "main.h"

/**
 * print_c_fmt - A function that prints in character format
 * @char_ap: takes in vchar_apariable number of argument
 * Return: 1
*/
int print_c_fmt(va_list char_ap)
{
	char strn;

	strn = va_arg(char_ap, int);
	_putchar(strn);
	return (1);
}
