#include "monty.h"

/**
  * t_pop - prints the top
  * @head: stack head
  * @numb: line number
  *
  * Return: no return
  */
void t_pop(stack_t **head, unsigned int numb)
{
        stack_t *k;

        if (*head == NULL)
        {
                fprintf(stderr, "L%d: can't pop an empty stack\n", numb);
                fclose(bus.file);
                free(bus.content);
                stack_free(*head);
                exit(EXIT_FAILURE);
        }
        k = *head;
        *head = k->next;
        free(k);
}
