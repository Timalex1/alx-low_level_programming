#include "holberton.h"

/**
 * *_strcat - concatenate two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: dest
 */


int _strlen(char *s)
{
	int counter = 0;

	while (*s != 0)
	{
		counter++;
		s++;
	}
	return (counter);
}

char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest), j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
