#include "main.h"

/**
 * print_alphabet_x10
 *
 * Description: same
 * Return: 0
 **/
void print_alphabet_x10(void)
{
	int i = 0;
	char letra;

	while (i++ <= 9)
	{
		for (letra = 'a'; letra <= 'z'; letra++)
		_putchar(letra);
		_putchar('\n');
	}
}
