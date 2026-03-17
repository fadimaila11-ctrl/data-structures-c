#include <stdio.h>
#include "stack.h"

int main()
{
    Node* stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Stack after pushes:\n");
    printStack(stack);

    printf("Top element: %d\n", peek(stack));
    printf("Popped: %d\n", pop(&stack));

    printf("Stack after pop:\n");
    printStack(stack);

    if (isEmpty(stack))
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack is not empty.\n");
    }

    return 0;
}