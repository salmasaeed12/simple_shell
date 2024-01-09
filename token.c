#include "shell.h"
#include <stdio.h>
#include <string.h>
/**
 * tokenization- the given string using the specified delimiter.
 * @line: The input string to be tokenized.
 * @delimiter: The delimiter used for tokenization.
 * Return: The original string (line).
 */


char *tokenization(char *line, const char *delimiter)
{
char *token;
char *tokenArray[MAX_TOKENS];
size_t tokenCount = 0;


if (line == NULL)
{
perror("Memory allocation error");
return (NULL);
}

token = strtok(line, delimiter);
while (token != NULL && tokenCount < MAX_TOKENS)
{

tokenArray[tokenCount++] = strdup(token);
token = strtok(NULL, delimiter);
}


tokenArray[tokenCount] = NULL;


return ((tokenCount > 0) ? tokenArray[0] : NULL);
}
