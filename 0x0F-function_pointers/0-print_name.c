#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that prints the name of a string
 * @name: pointer to char
 * @f: pointer to a function
 * Return: Nothing since it is void.
 */
void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
