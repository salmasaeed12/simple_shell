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
/**
 * _strcmp - performs lexicographic comparison of two strings
 * @str1: the first string
 * @str2: the second string
 *
 * Return:
 *   - Negative value if str1 is lexicographically less than str2
 *   - Positive value if str1 is lexicographically greater than str2
 *   - 0 if str1 is lexicographically equal to str2
 */
int _strcmp(const char *str1, const char *str2, int lenght)
{
int i = 0;

while (str1[i] != '\0' && str2[i] != '\0') {
if (str1[i] == str2[i])
{
i++;
}
else
{
return (str1[i] - str2[i]);
}
}
if (str1[i] == '\0' && str2[i] == '\0' && str[i][lenght]== '=')
{
return (0);
}
else if (str1[i] == '\0')
{
return (-1);
}
else
{
return (1);
}
}
/**
 * _strcat - concatenates two strings
 *@dest: the destination buffer
 *@src:the source buffer
 *Return: point to destination buffer
 */
void _strcat(char *dest, const char *src)
{
while (*dest) dest++;
*dest++ = '\\';
while ((*dest++ = *src++));
access_function(dest);
}
