#ifndef STACK_H
#define STACK_H

#include "linked_list.h"

void push(Node** top, int data);
int pop(Node** top);
int peek(Node* top);
int isEmpty(Node* top);
void printStack(Node* top);

#endif