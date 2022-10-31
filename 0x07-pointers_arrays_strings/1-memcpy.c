#include "main.h"
/**
 * _memcpy - function that copies n bytes from *src to *dest
 * @dest: pointer
 * @src: pointer
 * @n: unsigned int
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
