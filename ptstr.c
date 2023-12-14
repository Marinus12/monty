#include "monty.h"

/**
  * t_ptstr - prints the string starting at the top of the stack
  * followed by a new
  * @head: stack head
  * @numb: line number
  *
  * Return: no return
  */
void t_ptstr(stack_t **head, unsigned int numb)
{
        stack_t *h;
        (void)numb;

        h = *head;
        while (h)
        {
                if (h->n > 127 || h->n <= 0)
                        break;
                printf("%c", h->n);
                h = h->next;
        }
        printf("\n");
}
