#include "holberton.h"

/**
 * *_strcat - concatenate two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i=0; dest[i] != '\0'; ++i)
	;

	for (j=0; src[j] != '\0'; j++)
	{
	dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
    
}
