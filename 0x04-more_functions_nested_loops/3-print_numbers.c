#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: 0 (success)
*/
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 0);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
