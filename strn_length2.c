#include "main.h"

/**
 * _strnlen2 - A function that prints the length of a string
 * @strn: the string whose length we want to check
 * Return: returns the length
*/
int _strnlen2(const char *strn)
{
	int i = 0;

	while (strn[i] != '\0')
	{
		i++;
	}
	return (i);
}
