#include <stdlib.h>
#include <stdio.h>
/**
 *main - fizzingbuzzing
 *Return: zero
 */
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if ((n % 3) == 0)
{
printf("Fizz");
if ((n % 5) == 0)
{
printf("Buzz");
}
}
else if ((n % 5) == 0)
{
printf("Buzz");
}
else
{
printf("%d", n);
}
if (n != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
