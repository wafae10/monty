#include "monty.h"
/**
 * f_queue - prints the top of the stack
 * @head: stack head.
 * @counter: line_number
 * Return: nothing
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail of the stack
 * @n: new_value
 * @head: head of the stack
 * Return: nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *old;

	old = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (old)
	{
		while (old->next)
			old = old->next;
	}
	if (!old)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		old->next = new_node;
		new_node->prev = old;
	}
}
