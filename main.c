#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};
/**
  * main - monty code intrpreter
  * @argc: number of arguments
  * @argv: monty file location
  *
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
        char *content;
        FILE *file;
        size_t byte = 0;
        ssize_t line = 1;
        stack_t *hstack = NULL;
        unsigned int numb = 0;

        if (argc != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }
        file = fopen(argv[1], "r");
        bus.file = file;
        file = fopen(argv[1], "r");
        bus.file = file;
        if (!file)
        {
                fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
                exit(EXIT_FAILURE);
        }
        while (line > 0)
        {
                content = NULL;
                line = getline(&content, &byte, file);
                bus.content = content;
                numb++;
                if (line > 0)
                        executes(content, &hstack, numb, file);
                free(content);
        }
        stack_free(hstack);
        fclose(file);
        return (0);
}
