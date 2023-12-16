#include "monty.h"

/**
  * t_pint - prints the top
  * @head: the stack head
  * @numb: line_number
  *
  * Return: no return
  */
void t_pint(stack_t **head, unsigned int numb)
{
        if (*head == NULL)
        {
                fprintf(stderr, "L%u: can't pint, stack empty\n", numb);
                fclose(bus.file);
                free(bus.content);
                stack_free(*head);
                exit(EXIT_FAILURE);
        }
        printf("%d\n", (*head)->n);
}
