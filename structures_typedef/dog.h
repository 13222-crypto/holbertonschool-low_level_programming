#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Basic struct for dog information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* هذا هو السطر اللي يحل المشكلة ويخلي الـ Checker ينجح */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
