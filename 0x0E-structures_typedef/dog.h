#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
  *struct dog - structure of a dog
  *@name: name of the dog
  *@age: his age
  *@owner: his owner
  */
struct dog
{
	char *name;
	char *owner;
	float age;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
