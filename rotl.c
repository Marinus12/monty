#include "monty.h"

/**
  * t_rotl - rotates the stack to the top
  * @head: stack head
  * @numb: line number
  *
  * Return: no return
  */
void t_rotl(stack_t **head, __attribute__((unused)) unsigned int numb)
{
        stack_t *all = *head, *count;

        if (*head == NULL || (*head)->next == NULL)
                return;
        count = (*head)->next;
        count->prev = NULL;
        while (all->next != NULL)
                all = all->next;
        all->next = *head;
        (*head)->next = NULL;
        (*head)->prev = all;
        (*head) = all;
}
