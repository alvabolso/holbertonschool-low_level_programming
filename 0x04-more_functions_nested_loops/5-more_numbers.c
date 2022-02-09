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
	int num1 = 0;
/*	int num2 = 0;
*/
	while (counter < 10)
	{

	for (num1 = 0; num1 < 14 ; num1++)
	_putchar(num1 % 10 + '0');
	_putchar('\n');
	}
	
	counter = (counter + 1);

	}
