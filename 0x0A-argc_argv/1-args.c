#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 upon success
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

