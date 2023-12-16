#include "monty.h"

/**
  * t_swap - adds the top two elements of the stack
  * @head: stack head
  * @numb: line number
  *
  * Return: no return
  */
void t_swap(stack_t **head, unsigned int numb)
{
        stack_t *k;
        int ren = 0, count;

        k = *head;
        while (k)
        {
                k = k->next;
                ren++;
        }
        if (ren < 2)
        {
                fprintf(stderr, "L%d: can't swap stack too short\n", numb);
                fclose(bus.file);
                free(bus.content);
                stack_free(*head);
                exit(EXIT_FAILURE);
        }
        k = *head;
        count = k->n;
        k->n = k->next->n;
        k->next->n = count;
}
