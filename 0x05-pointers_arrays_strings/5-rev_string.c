#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: parameter input
*/
void rev_string(char *s)
{
	int x, y;
	char c;

	for (x = 0; s[x] != '\0'; ++x)
		;
	for (y = 0; y < x / 2; y++)
	{
		c = s[y];
		s[y] = s[x - 1 - y];
		s[x - 1 - y] = c;
	}
}
