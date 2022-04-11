#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog
 * NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *copy_name, *copy_owner;
	int i, j, n, o;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
		free(p);
	}
	for (i = 0; *(name + i); i++)
		;
	for (j = 0; *(owner + j); j++)
		;
	copy_name = malloc(sizeof(i + 1));
	copy_owner = malloc(sizeof(j + 1));
	if (p->name == NULL)
	{
		return (NULL);
		free(p->name);
	}
	if (p->owner == NULL)
	{
		return (NULL);
		free(p->owner);
	}
	for (n = 0; n <= i; n++)
	{
		p->name[n] = name[n];
		copy_name[n] = name[n];
	}
	for (o = 0; o <= j; o++)
	{
		p->owner[o] = owner[o];
		copy_owner[o] = owner[o];
	}
	p->age = age;
	return (p);
}
