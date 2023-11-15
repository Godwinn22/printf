#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct FormatHandler - Represents a format handler.
 * @sn: The serial number being handled.
 * @functptr: Pointer to the function being handled.
*/
typedef struct FormatHandler
{
	char *sn; /* handling their number */
	int (*functptr)(); /* handling the functions */
} FormatHandler;

typedef FormatHandler FormatMatch;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c_fmt(va_list char_ap);
int print_s_fmt(va_list strn_ap);
int _strnlen(char *strn);
int print_mod_fmt(void);
int print_d_fmt(va_list dec_ap);
int print_i_fmt(va_list int_ap);


#endif
