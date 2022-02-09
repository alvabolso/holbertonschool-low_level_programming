#include "main.h"

/**
 * print_numbers - Prints 0-9 numbers
 * Description: Same as above
 *
 * Return: void
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10 ; num++)
	_putchar((num % 10) + '0');
	_putchar('\n');
	}
