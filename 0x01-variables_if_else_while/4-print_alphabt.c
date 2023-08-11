#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
*/
int main(void)
{
	for (char c = 'a'; c <= 'z'; ++c)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
