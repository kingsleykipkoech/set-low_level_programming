#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **visited = NULL;
	size_t count = 0;
	size_t i;

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == visited[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(visited);
				return (count);
			}
		}

		/* Allocate new array of size count + 1 */
		{
			const listint_t **new_visited;

			new_visited = malloc(sizeof(listint_t *) * (count + 1));
			if (new_visited == NULL)
			{
				free(visited);
				exit(98);
			}
			for (i = 0; i < count; i++)
				new_visited[i] = visited[i];
			new_visited[count] = head;
			free(visited);
			visited = new_visited;
		}

		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}

	free(visited);
	return (count);
}
