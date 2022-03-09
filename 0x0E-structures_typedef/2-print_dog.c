#include "dog.h"

/**
 * print_dog - prints the info of struct dog
 * @d: a pointer variable of type struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age < 0)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		(d->owner == NULL) ? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);
	}
}
