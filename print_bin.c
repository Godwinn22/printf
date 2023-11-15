#include "main.h"

/**
 * print_binary - A function that converts an unsinged int into ninary
 * @bin_ap: takes in variable number of argument
 * Return: number of characters printed
*/
int print_binary(va_list bin_ap)
{
	int char_cont = 0;
	int flag = 0;
	int bit_index;
	int mask = 1;
	int b;

	unsigned int n = va_arg(bin_ap, unsigned int);
	unsigned int p;

	for (bit_index = 0; bit_index < 32; bit_index++)
	{
		p = ((mask << (32 - bit_index)) & n);
		if (p >> (31 - bit_index))
		{
			flag = 1;
		}
		if (flag)
		{
			b = p >> (31 - bit_index);
			_putchar(b + 48);
			char_cont++;
		}
	}
	if (char_cont == 0)
	{
		char_cont++;
		_putchar('0');
	}
	return (char_cont);
}
