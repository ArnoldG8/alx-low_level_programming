#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that prints the number fo arguements
 * @argc: input that counts commands
 * @argv: array that holds strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	*argv = *argv;
	argc = argc;
	printf("%d\n", argc - 1);

	return (0);
}
