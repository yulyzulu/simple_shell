#include "shell.h"

/**
*_strlen - return length to a string
*@s: The character to count
* Return: return an integer "i"
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: the diference between s1 and s2
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}

/**
* _strcat - Concatenate two strings
* @dest: array 1
* @src: array 2
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a] != '\0')
		a++;

	for (b = 0; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}