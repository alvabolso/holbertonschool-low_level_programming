#include "main.h"

/**
 * print_numbers - Prints 0-9 numbers
 * Description: Same as above
 *
 * Return: void
 */
void more_numbers(void)
{
	int counter = 0;
	int num = 0;

	while (counter < 10)
	{

	for (num = 0; num < 10 ; num++)
	_putchar((num % 10) + '0');
	_putchar('\n');
	
	counter = (counter + 1);

	}
}
