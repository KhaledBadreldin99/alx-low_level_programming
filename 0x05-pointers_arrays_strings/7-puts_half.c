#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: char array string type
 * Description: if odd number of chars, print (length - 1) / 2
*/
void puts_half(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
		;
	k++;
	for (k /= 2; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}

