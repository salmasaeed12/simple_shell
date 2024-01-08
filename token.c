#include "shell.h"
#include <stdio.h>

char *tokenization(char *line ,const char *delimiter)
{
    char *token;
    if (line == NULL)
    {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    token = strtok(line, delimiter);

    while (token != NULL)
    {
        printf("Token: %s\n", token);
        token = strtok(NULL, delimiter);
    }

    return (line);
}
