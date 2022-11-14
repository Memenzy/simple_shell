#include "shell.h"

/**
 * main _ Entry point for shell
 * @ac: Arg count
 * @av: Arr of agrs
 * @env: Environment
 * Return: 0
 */
int main(int ac, char **av, char **env)
{
	if (!ac)
		(void)ac;
	if (!av)
		(void)av;
	if (!env)
		(void)env;
	shell(ac, av, env);

	return (0);
}
