#include "monty.h"

int main(int argc, char *argv[])
{
    FILE *file;
    stack_t *stack;
    char *line;
    size_t len = 0;
    ssize_t read;

    stack = NULL;
    line = NULL;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, file)) != -1)
    {
        execute_opcode(&stack, 1, line);
    }

    fclose(file);
    free(line);
    return 0;
}