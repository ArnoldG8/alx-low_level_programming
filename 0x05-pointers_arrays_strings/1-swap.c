#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaping the value of two digits
 *
 * @a: input one
 * @b: input two
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
