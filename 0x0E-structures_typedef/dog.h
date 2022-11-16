#ifndef DOG_h
#define DOH_H

/**
 * struct dog - structure for basic dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: data structure for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif