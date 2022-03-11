#include "main.h"
#include <stdio.h>

/**
* _strpbrk - fills memory with a constant byte.
* @s: the address of memory to print
* @accept: the size of the memory to print
*
* Return: Nothing.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		if (*s == *accept)
		{
			return (s);
		}
	}
	return ('\0');
}
