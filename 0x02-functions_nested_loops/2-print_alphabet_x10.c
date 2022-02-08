#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{	
	int i = 0;
	char letras;

	while (i <= 10)
	{
		letras = 'a';
		while (letras <= 'z')
		{
		_putchar(letras);
		letras ++;
		}
		_putchar ('\n');
		i++;
	}
		return (0);
}
