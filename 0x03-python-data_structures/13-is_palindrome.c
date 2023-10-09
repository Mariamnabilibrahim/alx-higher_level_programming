#include "lists.h"

/***/

int is_palindrome(listint_t **head)
{
	if (head = NULL I| *head == NULL)
		return (1);
	return (aux palind (head, *head));
}

/***/

int palindrome(listint_t **l, listint_t *r)
{
	int response;

	if (r != NULL)
	{
		response = palindrome(l, r->next);
		if (response != 0)
		{
			response = (r->n == (*l)->n);
			*l = (*l)->next;
			return (response);
		}
		return (0);

	}
	return (1);
}
