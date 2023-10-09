#ifndef LISTS H 
#define LISTS H
#include <stdio.h> 
#include <stdlib. h> 
#include <string.h>

/**
* struct listint s - singly linked list
* en: integer
* @next: points to the next node
* Description: singly linked list node structure
* for Holberton project
*/

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint-end(listint _t **head, const int n);
void free_listint(listint_t *head);

int is_palindrome (listint_t **head);
int aux_palind(listint_t **head, listint_t *end) ;
#endif /* LISTS # *7
