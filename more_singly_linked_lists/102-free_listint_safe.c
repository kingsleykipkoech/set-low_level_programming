#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t **visited = NULL;
	listint_t *temp;
	size_t count = 0;
	size_t i;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (*h == visited[i])
			{
				*h = NULL;
				free(visited);
				return (count);
			}
		}

		/* Add current node to visited array */
		{
			listint_t **new_visited;

			new_visited = malloc(sizeof(listint_t *) * (count + 1));
			if (new_visited == NULL)
			{
				free(visited);
				exit(98);
			}
			for (i = 0; i < count; i++)
				new_visited[i] = visited[i];
			new_visited[count] = *h;
			free(visited);
			visited = new_visited;
		}

		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	*h = NULL;
	free(visited);
	return (count);
}
