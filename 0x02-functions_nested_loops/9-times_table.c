#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * Example
 * 0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
 * 0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
 * 0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
 * 0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
*/
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
