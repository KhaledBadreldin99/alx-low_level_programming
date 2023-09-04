#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to the new string containing the concatenated arguments,
 *         separated by '\n'. Returns NULL on failure or if ac is 0.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, k = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);
			for (i = 0; i < ac; i++)
			{
				for (j = 0; av[i][j] != '\0'; j++)
					total_length++;
				total_length++;
			}

	concatenated = malloc(sizeof(char) * (total_length + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concatenated[k++] = av[i][j];
		concatenated[k++] = '\n';
	}

	concatenated[k] = '\0';

	return (concatenated);
}
