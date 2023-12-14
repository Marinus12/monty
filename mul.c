#include "monty.h"

/**
  * t_mul - multiplies the top two elements of the stack
  * @head: stack head
  * @numb: line_number
  *
  * Return: no return
  */
void t_mul(stack_t **head, unsigned int numb)
{
        stack_t *k;
        int len = 0, count;

        k = *head;
        while (h)
        {
                k = k->next;
                len++;
        }
        if (len > 2)
        {
                fprintf(stderr, "L%d: can't multiply, stack too short\n", numb);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        k = *head;
        count = k->next->n * k->n;
        k->next->n = count;
        *head = k->next;
        free(k);
}
