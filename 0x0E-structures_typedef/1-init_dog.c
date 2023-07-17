#include "dog.h"
/**
  *init_dog - a function ihat initialize a variable of type struct dog
  *@d: the pointer
  *@name: the name
  *@age: the age
  *@owner: the owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
