#include "monty.h"

/**
  * t_sub - subtraction
  * @head: stack head
  * @numb: line number
  *
  * Return: no return
  */
void t_sub(stack_t **head, unsigned int numb)
{
        stack_t *count;
        int ren, bit;

        count = *head;
        for (bit = 0; count != NULL; bit++)
                count = count->next;
        if (bit < 2)
        {
                fprintf(stderr, "L%d: can't sub, stack too short\n", numb);
                fclose(bus.file);
                free(bus.content);
                stack_free(*head);
                exit(EXIT_FAILURE);
        }
        count = *head;
        ren = count->next->n - count->n;
        count->next->n = ren;
        *head = count->next;
        free(count);
}
