#include "dog.h"

/**
 * init_dog - function to initialize a variable of type struct dog
 * @d: variable of type struct dog
 * @name: first member of struct - dog name
 * @age: second member of struct - dog age
 * @owner: third member or struct - dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
