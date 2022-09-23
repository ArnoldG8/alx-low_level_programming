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
	int temp;
	int i = 0;

	n = n - 1;

	while (i < n)
	{
		temp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = temp;
		i++;
		n--;
	}
}
