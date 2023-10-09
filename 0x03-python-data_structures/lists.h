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

typedef struct listint s
{
	int n;
	struct listint s *next;
} listint t;

size_t print_listint (const listint_t th);
listint t *add nodeint end (listint + **head, const int n);
void free listint (listint_t *head);

int is _palindrome (listint_t **head);
int aux palind (listint _t ithead, listint_t tend) ;
#endif /* LISTS # *7
