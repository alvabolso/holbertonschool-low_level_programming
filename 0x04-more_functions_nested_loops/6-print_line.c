#include "main.h"

/**
 *  * print_line - prints a n length _ line
 *   * @n: length of line
 *    * Description: Same as above
 *     *
 *      * Return: void
 */
void print_line(int n)
{
	int linea = 0;

	while (linea < n)
	{
		_putchar ('_');
	linea++;
	}
	_putchar ('\n');
}
