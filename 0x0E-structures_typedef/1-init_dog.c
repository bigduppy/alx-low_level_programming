#include "dog.h"

/**
 * init_dog - initialize a va of type struct dog.
 * @d: pointer to struct type dog
 * @name: pointer to char name's dog
 * @age: age's
 * @owner: pointer t char owner's
 * Return: No.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	id(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
