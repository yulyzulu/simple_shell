#include "shell.h"
/**
*list_creator - Function that creates a nodes.
*@paths: double pointer string - Argument to free.
*@head: double pointer string - where the nodes are going to be added.
*Return: nothing.
*/

void list_creator(char **paths, list_t **head)
{
	int i = 0;

	while (paths[i])
	{
		add_node(head, paths[i]);
		i++;
	}
	free(paths);
}
