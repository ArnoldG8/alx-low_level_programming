/**
 * _memcpy - function for copying
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		*(dest + j) = *(src + j);
		j++;
	}

	return (dest);
}
