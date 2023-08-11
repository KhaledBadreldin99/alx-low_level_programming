#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
*/

int main(void)
{
	for (char ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	for (char ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	return (0);
}
