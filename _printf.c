#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: the format specifier
 * Return: return a custom printf and length
*/
int _printf(const char *format, ...)
{
	FormatMatch forms[] = {
		{"%c", print_c_fmt},
		{"%s", print_s_fmt},
		{"%%", print_mod_fmt},
		{"%d", }
	};

	int i = 0;
	int j;
	int len = 0;

	va_list ap;

	if ((format[0] == '%' && format[i] == '\0') || format == NULL)
	{
		return (-1);
	}

	va_start(ap, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 3)
		{
			if (forms[j].sn[0] == format[i] && forms[j].sn[1] == format[i + 1])
			{
				len += forms[j].functptr(ap);
				i += 2;
				break;
			}
			j++;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(ap);
	return (len);
}
