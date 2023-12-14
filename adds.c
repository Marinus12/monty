#include "monty.h"

/**
  * t_adds - adds the top two elements of the stack
  * @head: stack head
  * @numb: line number
  *
  * Return: no return
  */
void t_adds(stack_t **head, unsigned int numb)
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
                fprintf(stderr, "L%d: can't add, stack too short\n", numb);
                fclose(bus.file);
                free(bus.content);
                stack_free(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        count = h->n + h->next->n;
        h->next->n = count;
        *head = h->next;
        free(h);
}
