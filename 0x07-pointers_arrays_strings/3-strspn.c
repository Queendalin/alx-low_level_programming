#include "main.h"

/**
 * _strspn - the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: the length of a prefix substring n.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 0] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
