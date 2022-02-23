#include "main.h"

/**
 * _pow_recursion - returns the factorial of a given number.
 * Return: return
 * @x: variable
 * @y: variable
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
	return (1);
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
