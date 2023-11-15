#include "main.h"

/**
 * print_i_fmt - A function that prints in integer format
 * @int_ap: takes in variable number of integer argument
 * Return: 1
*/
int print_i_fmt(va_list int_ap)
{
	int i, n1, last_int, digits, exp_val;
	int var_ints = va_arg(int_ap, int);

	i = 1;
	last_int = var_ints % 10;
	exp_val = 1;

	var_ints /= 10;
	n1 = var_ints;

	if (last_int < 0)
	{
		_putchar(45);
		n1 = -n1;
		var_ints = -var_ints;
		last_int = -last_int;
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
	_putchar(last_int + '0');
	return (i);
}
