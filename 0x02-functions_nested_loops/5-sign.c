#include "main.h"
/**
 *  * print_sign - sign of a number
 *   * @n : input nuber
 *    * Return: 1 if positive, zero if =0 or -1 if negative
 */
int print_sign(int n)
{
	if (n == 0)
			{
		_putchar ('0');
		return (0);
			}
	else if (n > 0)
						{
											_putchar ('+');
														return (1);
																}
							else
											{
															_putchar ('-');
																		return (-1);
																					}
											}
