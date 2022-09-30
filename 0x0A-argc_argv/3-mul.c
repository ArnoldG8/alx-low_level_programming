#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that multiplies two numbers
 * @argc: counter for commands
 * @argv: array of strings for commands
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
