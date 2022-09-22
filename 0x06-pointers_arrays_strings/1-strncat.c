#include "main.h"
#include <string.h>
/**_strncat(char *dest, char *src, int n)
 * @dest: input one
 * @src: input two
 * @n: input three
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(*dest, *src, n);
	return (dest);
}
