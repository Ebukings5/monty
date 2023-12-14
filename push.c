#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{

    if (!stack || !*stack)
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

}