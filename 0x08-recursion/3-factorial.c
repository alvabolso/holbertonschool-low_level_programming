#include "main.h"

/**
 ** _puts_recursion - prints a string, followed by a new line.
 **
 ** @n: variable
 */
int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	else if (n != 0 && n > 0)
	{
	return (n * factorial(n - 1));
	}
	else
	{
	return (-1);
	}
}
