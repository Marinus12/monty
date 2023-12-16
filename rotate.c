#include "monty.h"

/**
  * t_rotr - rotates the stack to the bottom
  * @head: stack head
  * @numb: line_number
  *
  * Return: no return
  */
void t_rotr(stack_t **head, __attribute__((unused)) unsigned int numb)
{
        stack_t *ren;

        ren = *head;
        if (*head == NULL || (*head)->next == NULL)
                return;
        while (ren->next)
                ren = ren->next;
        ren->next = *head;
        ren->prev->next = NULL;
        ren->prev = NULL;
        (*head)->prev = ren;
        (*head) = ren;
}
