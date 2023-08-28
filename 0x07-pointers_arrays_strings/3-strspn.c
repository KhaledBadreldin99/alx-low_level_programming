#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing acceptable characters
 *
 * Return: Number of bytes in the initial segment of @s that consist only
 *         of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int is_acceptable;
	int i;

	while (*s)
	{
		is_acceptable = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				is_acceptable = 1;
				break;
			}
		}
		if (is_acceptable == 0)
		{
			break;
		}
		s++;
	}
	return (length);
}

