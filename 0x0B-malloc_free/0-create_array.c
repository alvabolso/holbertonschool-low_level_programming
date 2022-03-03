#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: size of the array of chars
 * @c: char to fill array
 * Return: NULL if fails and a pointer to an array if succeed
 */
char *create_array(unsigned int size, char c)
{
	char *array; /* creo un puntero a char llamado array */
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
