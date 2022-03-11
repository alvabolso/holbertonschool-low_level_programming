#include "main.h"

/**
 * _isdigit - Prints 1 if its a digit
 * and if not print 0
 * @letra: digit is an ASCII character
 * Description: Same as above
 *
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int letra)
{
		if (letra >= '0' && letra <= '9')
		{
		return (1);
		}
		else
{
	return (0);
		}
	}
