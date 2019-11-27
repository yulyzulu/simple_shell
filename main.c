#include "shell.h"

/**
*main- Shell program
*@ac: integer
*@av: double pointer
*@env: double pointer
*Return: Shell functions
*/

int main(__attribute__((unused))int ac, char **av, char **env)
{
	pid_t child;
	char *read, *get_path, *del = " \n";
	char **paths;
	int status;
	list_t *head;

	head = NULL;
	get_path = _getenv("PATH", env);
	paths = parse_line(get_path, ":");
	list_creator(paths, &head);
	free(get_path);

	while (1)
	{
		read = read_line(head);
		av = parse_line(read, del);
		built_in_command(av, env, read, head);
		av[0] = concatenate_list(&head, av[0]);

		child = fork();
		if (child == 0)
		{
			if (av[0] && (execve(av[0], av, NULL) == -1))
				perror("Error");
			exit(1);

		}
		else if (child == -1)
			perror("FORK FAILURE\n");
		else
		{
			wait(&status);
		}
		free(read);
		free(av[0]);
		free(av);
	}
	exit(0);
}
