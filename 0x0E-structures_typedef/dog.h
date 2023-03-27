#ifndef dog_h
#define dog_h
int _putchar(char c);
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
/**
  * struct dog - defines a new type struct dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  */
struct dog 
{
	char *name;
	float age;
	char *owner; 
}
#endif
