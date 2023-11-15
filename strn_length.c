#include "main.h"

/**
 * _strnlen - A function that prints the length of a string
 * @strn: the string whose length we want to check
 * Return: returns the length
*/
int _strnlen(char *strn)
{
	int i = 0;

	while (strn[i] != '\0')
	{
		i++;
	}
	return (i);
}
