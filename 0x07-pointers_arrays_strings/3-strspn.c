#include "main.h"

/**
 * unsigned int - Entry point
 * @s: input
 * @accept: input
 * Return: The nub of bytes
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
