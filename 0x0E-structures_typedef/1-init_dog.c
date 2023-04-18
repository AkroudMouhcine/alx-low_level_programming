#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog.
 *
 * @d: pointer.
 * @name: dog's name.
 * @age: dog age.
 * @owner: the dog's owner.
 *
 * Return: VOID
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
