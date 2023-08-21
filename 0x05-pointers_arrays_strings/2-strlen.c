#include "main.h"
/**
 * _strlen -  a function that returns the length of a string
 * @s: parameter
 * Return: length of a string
*/
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		++length;
	return (length);
}
