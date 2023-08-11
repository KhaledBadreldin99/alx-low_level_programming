#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
*/
int main(void)
{
	char n = '0';
	char l = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
