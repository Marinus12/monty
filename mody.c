#include "monty.h"

/**
  * t_mod - computes the rest of the division of the second top
  * element of the stack by the top element of the stack
  * @head: stack head
  * @numb: line number
  * Return: no return
  */
void t_mod(stack_t **head, unsigned int numb)
{
        stack_t *h;
        int len = 0, count;

        h = *head;
        while (h)
        {
                h = h->next;
                len++;
        }
        if (len < 2)
        {
                fprintf(stderr, "L%d: cant't mod, stack too short\n", numb);
                fclose(bus.file);
                free(bus.content);
                stack_free(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        if (h->n == 0)
        {
                 fprintf(stderr, "L%d: division by zero\n", numb);
                 fclose(bus.file);
                 free(bus.content);
                 stack_free(*head);
                 exit(EXIT_FAILURE);
        }
        count = h->next->n % h->n;
        h->next->n = count;
        *head = h->next;
        free(h);
}
