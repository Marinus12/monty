#include "monty.h"

/**
  * div_t - divides the top two elements of the stack
  * @head: stack head
  * @numb: the line number
  * Return: Nothing
  */
void t_div(stack_t **head, unsigned int numb)
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
                fprintf(stder, "L%d: can't div, stack very short\n", numb);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        if (h->n == 0)
        {
                fprintf(stderr, "L%d: division by zero\n", numb);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        count = h->next->n / n->n;
        h->next->n = count;
        *head = h->next;
        free(h);
}
