#include <stdio.h>

/**
 *
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of int: %lu byte(s)\n", sizeof(ainteger));
	printf("Size of long: %lu byte(s)\n", sizeof(along));
	printf("Size of long long: %lu byte(s)\n", sizeof(alonglong));
	printf("Size of float: %lu byte(s)\n", sizeof(afloat));

	return (0);
}
