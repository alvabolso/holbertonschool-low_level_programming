#include "main.h"

/**
 *  * print_most_numbers - Prints 0-9 numbers except 2 & 4
 *   * Description: Same as above
 *    *
 *     * Return: void
 *      */

void print_most_numbers(void)
{	
	int num;

	for (num = 0; num < 10 ; num++)
	if (num != 2 && num !=4)
	_putchar((num % 10) + '0');
	_putchar('\n');
	}
