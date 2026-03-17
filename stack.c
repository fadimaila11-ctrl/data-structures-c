#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push(Node** top, int data)
{
    Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
}

int pop(Node** top)
{
    if (*top == NULL)
    {
        printf("Stack is empty.\n");
        return -1;
    }

    Node* temp = *top;
    int value = temp->data;

    *top = temp->next;
    free(temp);

    return value;
}

int peek(Node* top)
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return -1;
    }

    return top->data;
}

int isEmpty(Node* top)
{
    return top == NULL;
}

void printStack(Node* top)
{
    Node* current = top;

    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}