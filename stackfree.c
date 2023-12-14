#include "monty.h"

/**
  * stack_free - frees a doubly linked list
  * @head: head of the stack
  *
  */
void stack_free(stack_t *head)
{
        stack_t *count;

        count = head;
        while (head)
        {
                count = head->next;
                free(head);
                head = count;
        }
}
