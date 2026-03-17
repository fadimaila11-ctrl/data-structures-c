#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void enqueue(Queue* queue, int data)
{
    Node* newNode = createNode(data);

    if (queue->rear == NULL)
    {
        queue->front = newNode;
        queue->rear = newNode;
        return;
    }

    queue->rear->next = newNode;
    queue->rear = newNode;
}

int dequeue(Queue* queue)
{
    if (queue->front == NULL)
    {
        printf("Queue is empty.\n");
        return -1;
    }

    Node* temp = queue->front;
    int value = temp->data;

    queue->front = queue->front->next;

    if (queue->front == NULL)
    {
        queue->rear = NULL;
    }

    free(temp);
    return value;
}

int peekQueue(Queue* queue)
{
    if (queue->front == NULL)
    {
        printf("Queue is empty.\n");
        return -1;
    }

    return queue->front->data;
}

int isQueueEmpty(Queue* queue)
{
    return queue->front == NULL;
}

void printQueue(Queue* queue)
{
    Node* current = queue->front;

    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}