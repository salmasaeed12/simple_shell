#include "shell.h"

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vectors
 * @env: environments variables
 * Return: 0 on success
*/
int main(int argc, char **argv, char **env)
{
    (void)argc;
    while (isatty(STDIN_FILENO) == 1)
    {
        Display_terminal();
        read_input();
    }
    exit_builtin();
    return (0);
}
/**
 * exit_builtin - Handles the exit built-in command
 */
void exit_builtin(void)
{
char *string = "Exiting shell...\n";
int len;

len = _strlen(string);
write(STDOUT_FILENO, string, len);
exit(EXIT_SUCCESS);
}
