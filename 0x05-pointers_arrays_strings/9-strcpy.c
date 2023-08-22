#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: char type
 * @src: char type
 * Return: pointer to 'dest'
*/
char *_strcpy(char *dest, char *src)
{
	int k = -1;

	do {
		k++;
		dest[k] = src[k];
	} while (src[k] != '\0');
	return (dest);
}
