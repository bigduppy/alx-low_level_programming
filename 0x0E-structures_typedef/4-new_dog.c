#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *doge;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	doge = malloc(sizeof(dog_t))
		j++;
	if (doge = NULL)
	{
		free(doge);
		return(NULL);
	}
	doge->name = malloc(i * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		return(NULL);
}
