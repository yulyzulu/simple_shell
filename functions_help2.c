#include "shell.h"
/**
* add_node - Add new node at the beginning of a list.
* @head: The argument.
* @str: The names to count.
* Return: The New node.
*/
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
* free_list - Frees a list.
* @head: The argument.
* Return: Nothing.
*/
void free_list(list_t *head)
{
	list_t *p = head;

	while (p)
	{
		free(head->str);
		free(head);
		p = p->next;
		head = p;
	}
	free(head);
}
/**
* _strcpy - copies the string pointed to by src
* @dest: copy the string
* @src: the string to copy
* Return: value to pointer dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
