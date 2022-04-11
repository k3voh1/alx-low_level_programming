#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure containing details of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner and caretaker of the dog
 *
 * Description: struct called dog stores name, age
 * and owner details of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
