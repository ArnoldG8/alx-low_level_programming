#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array and puts a char
 * @size: The size of the array
 * @c: Array itslef
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = (char *) malloc(size * sizeof(char));

	if (size <= 0)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
