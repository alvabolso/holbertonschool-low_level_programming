#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes composing prefix
 * Return: bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont = 0;
	unsigned int antes = 0;
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		j = 0;
		antes = cont;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				cont++;
			}
			j++;
		}
		if (antes == cont)
		{
			break;
		}
		i++;
	}
return (cont);
}
