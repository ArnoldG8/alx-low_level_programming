#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that prints whatever is in the terminal
 * @argc: counter for all commands
 * @argv: arrays of strings in terminal
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	argc = argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
