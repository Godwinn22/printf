#include "main.h"

/**
 * print_d_fmt - A function that prints in decimal format
 * @dec_ap: takes in variable number of decimal argument
 * Return: 1
*/
int print_d_fmt(va_list dec_ap)
{
	int i, n1, last_dec, digits, exp_val;
	int var_ints = va_arg(dec_ap, int);

	i = 1;
	last_dec = var_ints % 10;
	exp_val = 1;

	var_ints /= 10;
	n1 = var_ints;

	if (last_dec < 0)
	{
		_putchar(45);
		n1 = -n1;
		var_ints = -var_ints;
		last_dec = -last_dec;
		i++;
	}

	if (n1 > 0)
	{
		while (n1 / 10 != 0)
		{
			exp_val *= 10;
			n1 /= 10;
		}
		n1 = var_ints;
		while (exp_val > 0)
		{
			digits = n1 / exp_val;
			_putchar(digits + '0');
			n1 = n1 - (digits * exp_val);
			exp_val /= 10;
			i++;
		}
	}
	_putchar(last_dec + '0');
	return (i);
}
