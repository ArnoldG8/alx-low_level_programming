#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - function to allocate space the size of the input and return the pointer.
 * @b: unsigned input.
 * Return: Always 0 Success, 98 otherwise.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
