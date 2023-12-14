#include "monty.h"

/**
  * t_char - prints the char at the top of the stack, then a new line
  * @head: stack head
  * @numb: line_number
  *
  * Return: no return
  */
void t_char(stack_t **head, unsigned int numb)
{
        stack_t *h;

        h = *head;
        if (!h)
        {
                fprintf(stderr, "L%d: can't pchar, stack empty\n", numb);
                fclose(bus.file);
                free(bus.content);
                stack_free(*head);
                exit(EXIT_FAILURE);
        }
        if (h->n > 127 || h->n < 0)
        {
                fprintf(stderr, "L%d: can't pchar, value out of range\n", numb);
                fclose(bus.file);
                free(bus.content);
                stack_free(*head);
                exit(EXIT_FAILURE);
        }
        printf("%c\n", h->n);
}
