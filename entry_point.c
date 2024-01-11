#include "shell.h"

/**
 * Display_terminal - Display information about the terminal
 *   or shell environment.
 * This function provides details about the current working directory,
 * user information, etc.
 */
void Display_terminal(void)
{
const char *prompt = "$ ";
(void)write(STDOUT_FILENO, prompt, _strlen(prompt));
}
