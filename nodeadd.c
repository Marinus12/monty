#include "monty.h"

/**
  * add_node - adds node to the head stack
  * @head: head of the stack
  * @n: new_value
  *
  * Return: no return
  */
void add_node(stack_t **head, int n)
{
        stack_t *new, *count;

        count = *head;
        new = malloc(sizeof(stack_t));
        if (new == NULL)
        {
                printf("Error\n");
                exit(0);
        }
        if (count)
                count->prev = new;
        new->n = n;
        new->next = *head;
        new->prev = NULL;
        *head = new;
}
