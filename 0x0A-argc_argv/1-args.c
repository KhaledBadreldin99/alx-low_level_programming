#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

