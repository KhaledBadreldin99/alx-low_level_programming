#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The input string to duplicate.
 *
 * Return: On success, a pointer to the duplicated string.
 *         On failure, returns NULL if insufficient memory was available
 *         or if str is NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

		if (str == NULL)
		{
			return (NULL);  /* Return NULL if input string is NULL */
		}
		while (str[length] != '\0')
		{
			length++;
		}

		/* Allocate memory for the duplicate string */
		duplicate = malloc(sizeof(char) * (length + 1));
		if (duplicate == NULL)
		{
			return (NULL);  /* Memory allocation failed */
		}

		/* Copy the content of the input string to the duplicate */
		for (i = 0; i <= length; i++)
		{
			duplicate[i] = str[i];
		}
		return (duplicate);
}

