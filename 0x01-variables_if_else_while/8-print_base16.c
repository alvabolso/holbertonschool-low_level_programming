#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letra;

	for (num = 0; num < 10 ; num++)
	putchar((num % 10) + '0');
	for (letra = 'a'; letra <= 'f'; letra++)
	putchar(letra);
	putchar('\n');
	return (0);
}
