#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: destination mem area
 * @src: source mem area
 * @n: num of bytes to be filled
 * Return: pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n ; x++)
		dest[x] = src[x];
	return (dest);
}
