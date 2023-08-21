#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: pointer to string
*/
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
