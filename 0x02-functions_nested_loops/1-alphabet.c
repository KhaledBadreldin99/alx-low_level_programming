#include "main.h"
/**
 * print_alphabet - use _putchar to print the alphabet in lowercase
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
