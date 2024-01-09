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
return (0);
}
