#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * create_array - creates an array of characters
 * @size: unsigned int type
 * @c: char type
 * Return: Returns pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	b = malloc((size) * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		b[i] = c;
		i++;
	}
	b[i] = '\0';
	return (b);
}
