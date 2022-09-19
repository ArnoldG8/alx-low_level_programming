#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * mul - function for multiplication
 * @a: input
 * @b: input
 *
 * Return: Always 0 (Success)
 */
int mul(int a, int b);
int main(void)
{
	int x = mul(1, 2);
	
	return (x);
}
int mul(int a, int b)
{
	int c =  a * b;
	return (c);
}
