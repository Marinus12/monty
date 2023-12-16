#include "monty.h"

/**
  * t_push - add node to the stack
  * @head: stack head
  * @numb: line_number
  *
  * Return: no return
  */
void t_push(stack_t **head, unsigned int numb)
{
        int k, j = 0, len = 0;

        if (bus.arg)
        {
                if (bus.arg[0] == '-')
                        j++;
                for (; bus.arg[j] != '\0'; j++)
                {
                        if (bus.arg[j] > 57 || bus.arg[j] < 48)
                                len = 1;
                }
                if (len == 1)
                {
                        fprintf(stderr, "L%d: usage: push integer\n", numb);
                        fclose(bus.file);
                        free(bus.content);
                        stack_free(*head);
                        exit(EXIT_FAILURE);
                }
                else
                {
                        fprintf(stderr, "L%d: usage push integer\n", numb);
                        fclose(bus.file);
                        free(bus.content);
                        stack_free(*head);
                        exit(EXIT_FAILURE);
                }
                k = atoi(bus.arg);
                if (bus.lifi == 0)
                        add_node(head, k);
                else
                        add_queue(head, k);
        }
}
