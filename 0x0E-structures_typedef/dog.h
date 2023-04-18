#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct.
 *
 * @name: dog's name.
 * @age: dog age.
 * @owner: the dog's owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

