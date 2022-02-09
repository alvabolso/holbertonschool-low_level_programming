#include "main.h"

/**
 *  * print_diagonal - prints a n length \ diagonal line
 *   * @n: length of line
 *    * Description: Same as above
 *     *
 *      * Return: void
 */
void print_diagonal(int n)
{
	int linea = 0;
	int space;

	if (n > 0)
	{
		while (linea < n)
		{
		for (space = 0; space < linea; space++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		linea++;
		}
	}
	else
		{
		_putchar('\n');
		}
}
