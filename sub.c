#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *old;
	int sus, nodes;

	old = *head;
	for (nodes = 0; old != NULL; nodes++)
		old = old->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	old = *head;
	sus = old->next->n - old->n;
	old->next->n = sus;
	*head = old->next;
	free(old);
}
