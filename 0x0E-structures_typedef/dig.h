#ifndef DOG
#define DOG

/**
 * struct dog - write a class for dug
 * @name: dog name
 * @age: dog age
 * @owner: owner of do
 * Return: 0
 */

struct dog
{
	char *name;
	int age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
