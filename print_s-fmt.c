#include "main.h"

/**
 * print_s_fmt - A function that prints in character format
 * @strn_ap: takes in variable number of argument
 * Return: 1
*/
int print_s_fmt(va_list strn_ap)
{
	int i;
	char *strn;
	int strn_len;

	strn = va_arg(strn_ap, char *);
	if (strn == NULL)
	{
		strn = "(null)";
		strn_len = _strnlen(strn);
		for (i = 0; i < strn_len; i++)
		{
			_putchar(strn[i]);
		}
		return (strn_len);
	}
	else
	{
		strn_len = _strnlen(strn);
		for (i = 0; i < strn_len; i++)
		{
			_putchar(strn[i]);
		}
		return (strn_len);
	}
}
