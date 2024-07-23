#include "dog.h"

/**
 * init_dog - initialises variable of type struct dog
 * @d: struct name
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != null)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}