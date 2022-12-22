#include "main.h"

/**
 * string_toupper - Changes all lowercase characters
 * in a string to uppercase
 * @str: string to be changed
 * Return: a poinnter to the changed string
 */i
char *string_toupper(char *str)

{

	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);

}
