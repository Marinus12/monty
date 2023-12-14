#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * struct stack_s - doubly linked list representation of a stack (or queue)
  * @n: integer
  * @prev: points to the previous element of the stack (or queue)
  * @next: points to the next element of the stack (or queue)
  *
  * Description: doubly linked list node structure
  * for stack, queues, LIFO, FIFO
  */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
  * struct instruction_s - opcode and its function
  * @opcode: the opcode
  * @f: function to handle opcode
  *
  * Description: opcode and its functiom
  * for stack, queues, LIFO, FIFO
  */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void t_div(stack_t **head, unsigned int numb);
void t_mod(stack_t **head, unsigned int numb);
void t_pall(stack_t **head, unsigned int numb);
void t_ptstr(stack_t **head, unsigned int numb);
void t_rotr(stack_t **head, __attribute__((unused)) unsigned int numb);
void t_adds(stack_t **head, unsigned int numb);
void t_push(stack_t **head, unsigned int numb);
void t_stack(stack_t **head, unsigned int numb);
void add_node(stack_t **head, int k);
void(stack_t *head);
void t_mul(stack_t **head, unsigned int numb);
void t_pint(stack_t **head, unsigned int numb);
void t_queue(stack_t **head, unsigned int numb);
void add_queue(stack_t **head, int k);
void t_sub(stack_t **head, unsigned int numb);
void t_nop(stack_t **head, unsigned int numb);
int main(int argc, char *argv[]);
void t_swap(stack_t **head, unsigned int numb);
void stack_free(stack_t *head);
void t_rotl(stack_t **head, __attribute__((unused)) unsigned int numb);
int executes(char *content, stack_t hstack, unsigned int numb, FILE *file);
#endif
