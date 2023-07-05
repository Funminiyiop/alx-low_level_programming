#include "main.h"

/**
 * _strpbrk - search string for any of a set of bytes
 * @s: string to search
 * @accept: target match
 * Return: pointer to byte for one of accept or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
