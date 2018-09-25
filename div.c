#include "monty.h"

/**
 *_div - divedes the second to top elament of the stack by the top elament
 *@head: the head of the stack
 *@line: the line number
 *Return: void
 */

void _div(stack_t **head, unsigned int line)
{
	stack_t *current = NULL;

	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%d: can't div, stack too short\n", line);
		exit(EXIT_FAILURE);
		return;
	}

	if ((*head)->n == 0)
	{
		printf("L%d: division by zero\n", line);
		exit(EXIT_FAILURE);
		return;
	}

	current = *head;
	current = current->next;
	current->n = current->n / (*head)->n;
	current->prev = NULL;
	free(*head);
	*head = current;
}