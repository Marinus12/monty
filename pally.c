#include "monty.h"

/**
  * t_pall - prints the stack
  * @head: stack head
  * @numb: no used
  * Return: no return
  */
void t_pall(stack_t **head, unsigned int numb)
{
        stack_t *h;
        (void)numb;

        h = *head;
        if (h == NULL)
                return;
        while (h)
        {
                printf("%d\n", h->n);
                h = h->next;
        }
}
