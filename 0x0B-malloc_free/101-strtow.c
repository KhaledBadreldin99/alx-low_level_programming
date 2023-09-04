#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
static int count_words(const char *str)
{
	int count = 0;
	int in_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), where the last element
 *         is NULL. Returns NULL on failure, or if str is NULL or empty.
 */
char **strtow(char *str)
{
	int word_count;
	char **words;
	int i;
	int k;
	int j;
	int word_length;
	int l;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			j = i;

			while (str[i] != ' ' && str[i] != '\0')
				i++;

			word_length = i - j;

			words[k] = malloc(sizeof(char) * (word_length + 1));

			if (words[k] == NULL)
			{
				for (l = 0; l < k; l++)
					free(words[l]);
				free(words);
				return (NULL);
			}

			strncpy(words[k], &str[j], word_length);
			words[k][word_length] = '\0';
			k++;
		}
		else
		{
			i++;
		}
	}

	words[k] = NULL;
	return (words);
}

