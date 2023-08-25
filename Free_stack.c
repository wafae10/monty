#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *old;

	old = head;
	while (head)
	{
		old = head->next;
		free(head);
		head = old;
	}
}
