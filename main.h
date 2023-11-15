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
int print_c_fmt(va_list char_ap); /* for printing characters */
int print_s_fmt(va_list strn_ap); /* for printing strings */
int _strnlen(char *strn); /* will be used for getting the length of strings*/
int print_mod_fmt(void); /* for printing the % sign */


#endif