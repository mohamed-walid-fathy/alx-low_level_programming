#include "dog.h"

/**                                         
*init_dog - initialises a dog       
*Description: creates a dog
*@d
*@name
*@age
*@owner
*Return: void                 
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
