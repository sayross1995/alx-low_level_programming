#include "dog.h"
/**
  *print_dog -  a function that prints a struct dog
  *@d: the pointer to dog
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		printf("Name: %s\n", d->name);
		if (d->age < 0)
		{
			printf("Age: (nil)");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		printf("Owner: %s\n", d->owner);
	}
}
