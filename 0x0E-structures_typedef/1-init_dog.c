#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - i
 * @d: the
 * @name: the
 * @age: the
 * @owner: thee
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
