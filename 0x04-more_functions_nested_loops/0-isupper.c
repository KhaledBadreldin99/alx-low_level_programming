#include "main.h"
#include <stdio.h>
/**
 * _isupper - a function that checks for uppercase character
 * @c: output
 * Return: 1 if uppercase, 0 if not
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
