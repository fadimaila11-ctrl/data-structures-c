#include <stdio.h>
#include "queue.h"

int main()
{
    Queue queue;
    queue.front = NULL;
    queue.rear = NULL;

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Queue after enqueue:\n");
    printQueue(&queue);

    printf("Front element: %d\n", peekQueue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));

    printf("Queue after dequeue:\n");
    printQueue(&queue);

    if (isQueueEmpty(&queue))
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue is not empty.\n");
    }

    return 0;
}