#include "main.h"
#include <stdio.h>
/**
 * _abs - a function that computes the absolute value of an integer
 * @n: takes input from function
 * Return: 0 (success)
*/
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
