#include "main.h"

/**
 * reverse_array - reverses the array content
 * @a: number to be reversed
 * @n: array length
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
