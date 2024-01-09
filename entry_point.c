#include "shell.h"

/**
 * Display_terminal - Display information about the terminal
 *   or shell environment.
 * This function provides details about the current working directory,
 * user information, etc.
 */
void Display_terminal(void)
{
const char *prompt = "(Eshell) $ ";
(void)write(STDOUT_FILENO, prompt, _strlen(prompt));
}
/**
 * read_input - Read user input from the terminal.
 * This function reads a line of input from
 * the user and processes it as needed.
 */
void read_input(void)
{
char *line = NULL;
size_t len = 0;
int read;
#ifdef _POSIX_C_SOURCE
#undef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE 200809L
#endif

read = getline(&line, &len, stdin);
if (read != -1)
tokenization(line);
else
perror("getline");
free(line);
}
