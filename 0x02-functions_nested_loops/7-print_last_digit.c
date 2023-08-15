#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * n: the input number
 * Return: lastdigit
*/
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (n < 0)
		lastdigit = -lastdigit;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
