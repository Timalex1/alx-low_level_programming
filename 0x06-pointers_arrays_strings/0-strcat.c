#include "holberton.h"

/**
 * *_strcat - concatenate two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: dest
 */

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
