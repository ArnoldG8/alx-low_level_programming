#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array of integers
 * @n: number of values in arrays
 *
 * Return: void 
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 1; i < n; i++
		p++;

	for (k = 0; k < 1 / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
