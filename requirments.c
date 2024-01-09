#include "shell.h"
#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @string: the value
 * Return: integer lenght of  string
 */
int _strlen(const char *string)
{
int i = 0;
while (string[i] != '\0')
{
i++;
}
return (i);
}
