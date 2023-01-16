#include "dog.h"
/**
 * init_dog - function name
 * @d: pointer
 * @name: First parameter
 * @age: Secondd parameter
 * @owner: Third parameter
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name =  name;
	d->age = age;
	d->owner = owner;
}
