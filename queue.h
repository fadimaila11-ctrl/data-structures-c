#ifndef QUEUE_H
#define QUEUE_H

#include "linked_list.h"

typedef struct Queue
{
    Node* front;
    Node* rear;
} Queue;

void enqueue(Queue* queue, int data);
int dequeue(Queue* queue);
int peekQueue(Queue* queue);
int isQueueEmpty(Queue* queue);
void printQueue(Queue* queue);

#endif