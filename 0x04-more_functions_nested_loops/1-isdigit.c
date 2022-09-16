#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function to check if it is a digit
 *
 * @c: input
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
