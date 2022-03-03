#include "main.h"

/**
 * *_strdup - pointer to a new allocated space in memory, with a copy of str.
 * @str: string to be copy by the new pointer to a string
 * Return: NULL if str is NULL or a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *str_copy;
	unsigned int i = 0;
	unsigned int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while ((str[length] != '\0'))
	{
		length++;
	}
	length++;
	str_copy = malloc(sizeof(char) * length);

	if (str_copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		str_copy[i] = str[i];
	}
	return (str_copy);
}
