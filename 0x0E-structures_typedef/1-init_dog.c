#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize,function parameter
 * @name: name to initialize,function parameter
 * @age: age to initialize,function parameter
 * @owner: owner to initialize,function parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

