#include "main.h"

/**
 * _memcpy - copies n bytes of memory from source to dest
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: n amount of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
