#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len_s1 = 0, len_s2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;

	while (s2[len_s2])
		len_s2++;

	concatenated = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (concatenated == NULL)
		return (NULL);  /* Memory allocation failed */

	for (i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len_s2; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}
