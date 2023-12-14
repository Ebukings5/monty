#include "monty.h"

void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;
    temp = *stack;
    *stack = (*stack)->next;
    free(temp);
    
    if (!*stack)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

}
