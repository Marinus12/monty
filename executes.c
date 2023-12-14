#include "monty.h"

/**
  * executes - executes the opcode
  * @hstack: head linked list - stack
  * @numb: line_counter
  * @file: pointer to monty file
  * @content: line content
  *
  * Return: no return
  */
int executes(char *content, stack_t **hstack, unsigned int numb, FILE *file)
{
        instruction_t opst[] = {
                {"push", t_push}, {"pall", t_pall}, {"pint", t_pint},
                {"pop", t_pop},
                {"add", t_adds},
                {"nop", t_nop},
                {"sub", t_sub},
                {"div", t_div},
                {"mul", t_mul},
                {"mod", t_mod},
                {"pchar", t_ptchar},
                {"pstr", t_ptstr},
                {"rotl", t_rotl},
                {"rotr", t_rotr},
                {"queue", t_queue},
                {"stack", t_stack},
                {NULL, NULL}
        };
        unsigned int i = 0;
        char *ops;

        ops = strtok(content, " \n\t");
        if (ops && ops[0] == '#')
                return (0);
        bus.arg = strtok(content, " \n\t");
        while (opst[i].opcode && ops)
        {
                if (strcmp(ops, opst[i].opcode) == 0)
                {
                        opst[i].f(hstack, numb);
                        return (0);
                }
                i++;
        }
        if (ops && opst[i].opcode == NULL)
        {
                fprintf (stderr, "L%d: unknown instruction %s\n", numb, ops);
                fclose(file);
                free(content);
                free_stack(*hstack);
                exit(EXIT_FAILURE);
        }
        return (1);
}
