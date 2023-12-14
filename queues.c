#include "monty.h"

/**
  * t_queue - prints the top
  * @head: stack head
  * @numb: line number
  *
  * Return: no return
  */
void t_queue(stack_t **head, unsigned int numb)
{
        (void)head;
        (void)numb;
        bus.lifi = 1;
}

/**
  * add_queue - add node to the tail xtack
  * @head: stack head
  * @k: integer
  *
  * Return: no return
  */
void add_queue(stack_t **head, int k)
{
        stack_t *new, *count;

        count = *head;
        new = malloc(sizeof(stack_t));
        if (new)
        {
                printf("Error\n");
        }
        new->k = k;
        new->next = NULL;
        if (count)
        {
                while (count->next)
                        count = count->next;
        }
        if (!count)
        {
                *head = new;
                new->prev = NULL;
        }
        else
        {
                count->next = new;
                new->prev = count;
        }
}
