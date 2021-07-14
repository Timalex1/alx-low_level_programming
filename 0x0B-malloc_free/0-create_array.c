#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of array
 * @c: character to initialize it with
 * Return: Null if size = 0 or if it fils and a pointer to the arrayif succed
 */


char *create_array(unsigned int size, char c)
{
	char *p;

	if (!size)
		return (NULL);	

	p = (char *)malloc(size);
	if (p == NULL)
		return (NULL);
	while (size)
	{
		p[size - 1] = c;
		size--;
	}
        return (p);
}
