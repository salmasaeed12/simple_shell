#include "shell.h"
#include <stdio.h>
#include <string.h>
/**
 * tokenization- the given string using the specified delimiter.
 * @line: The input string to be tokenized.
 * @delimiter: The delimiter used for tokenization.
 * Return: pointer to an array of strings.
 */

char **tokenization(char *line, const char *delimiter)
{
char *token;
char **tokenArray = (char **)malloc((MAX_TOKENS + 1) * sizeof(char *));
size_t tokenCount = 0;
if (tokenArray == NULL)
{
exit(EXIT_FAILURE);
}

token = strtok(line, delimiter);
while (token != NULL && tokenCount < MAX_TOKENS)
{
tokenArray[tokenCount] = strdup(token);
token = strtok(NULL, delimiter);
++tokenCount;
}
tokenArray[tokenCount] = NULL;
return (tokenArray);
}
char **access_function(char **tokenArray)
{
    pid_t pid;
    char **value;
    if (access(tokenArray[0], F_OK) == -1)
    {
        pid = fork;
        if (fork != -1)
        {
         value = tokenization(get_env(tokenArray), ':');
         if(value != '\0' && tokenArray != '\0')
         _strcat(value, tokenArray);
        }
    }
    else
    {
        execute_command(tokenArray);
    }

    return (tokenArray);
}
